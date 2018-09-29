#include<iostream>
#include<cstdlib>

using namespace std;

struct AdjListNode {
	int data;
	struct AdjListNode* next;
};

struct AdjList {
	struct AdjListNode* head;
};

class Graph {
	int v;
	AdjList* array;
public:
	Graph(int v) {

		this->v = v;
		array = new AdjList[v];
		for (int i = 0; i < v; ++i) {
			array[i].head = NULL;
		}

	}
	void addEdge(int src, int dest) {
		AdjListNode* newNode = new AdjListNode;
		newNode->data = dest;
		newNode->next = NULL;

		newNode->next = array[src].head;
		array[src].head = newNode;


		newNode = new AdjListNode;
		newNode->data = src;
		newNode->next = NULL;

		newNode->next = array[dest].head;
		array[dest].head = newNode;

	}
	void printGraph() {
		int j;
		for (j = 0; j < v; j++) {

			AdjListNode* temp = array[j].head;
			cout << "\n adjacency list of vertex" << j << "\n head";

			while (temp)
			{
				cout << "->"<<temp->data;
				temp = temp->next;

			}
			cout << endl;
		}
	}
};

int main() {

	Graph gh(5);

	gh.addEdge(0, 1);
	gh.addEdge(0,4);
	gh.addEdge(1,2);
	gh.addEdge(1,3);
	gh.addEdge(1,4);
	gh.addEdge(2,3);
	gh.addEdge(3,4);

	gh.printGraph();
	cin.get();

	return 0;


}