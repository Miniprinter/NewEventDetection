#include "DataPreprocessing.h"

void DataPreprocessing(vector<Document> &corpus, vector<string> &glossary, const string &tkn_file, const string &bnd_file)
{
	readCorpus(corpus, glossary, tkn_file, bnd_file);
	// TODO: any other processing?
}

/* Set 'corpus' & 'glossary' here. No-stemmer version. */
void readCorpus(vector<Document> &corpus, vector<string> &glossary, const string &tkn_file, const string &bnd_file)
{
	// TODO
}

/* Set 'corpus' & 'glossary' here. Stemming version. */
void readCorpusWithStemmer(vector<Document> &corpus, vector<string> &glossary, const string &tkn_file, const string &bnd_file)
{
	// TODO: optional
}
