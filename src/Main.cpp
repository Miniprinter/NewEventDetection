#include "DataPreprocessing.h"
#include "Clustering.h"
#include "NewEventDetection.h"
#include "Evaluation.h"

vector<Document> corpus;
vector<string> glossary;

int main(int argc, char **argv){
	const string TKN_FILE = "";
	const string BND_FILE = "";
	const string RESULT_FILE = "";

	DataPreprocessing(corpus, glossary, TKN_FILE, BND_FILE);
	Clustering(corpus);
	NewEventDetection(corpus);
	Evaluation(corpus);

	return 0;
}
