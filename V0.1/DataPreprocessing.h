#ifndef DATA_PREPROCESSING_H
#define DATA_PREPROCESSING_H

#include "Utilities.h"
#include "Document.h"

void DataPreprocessing(vector<Document> &corpus, vector<string> &glossary, const string &tkn_file, const string &bnd_file);
void readCorpus(vector<Document> &corpus, vector<string> &glossary, const string &tkn_file, const string &bnd_file);
void readCorpusWithStemmer(vector<Document> &corpus, vector<string> &glossary, const string &tkn_file, const string &bnd_file);

#endif
