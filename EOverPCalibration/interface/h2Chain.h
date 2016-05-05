#ifndef h2Chain_h
#define h2Chain_h

#include "TH2F.h"
#include "TFile.h"
#include "TString.h"

#include <vector>
#include <string>


class h2Chain {
public:
	h2Chain (TString baseName, TString baseTitle,
	         int nbinsx, double minx, double maxx,
	         int nbinsy, double miny, double maxy, int NUM) ;
	~h2Chain () ;

	void SetColors (std::vector<int> colors) ;
	void Fill (int i, double valx, double valy) ;
	void Fill (int i, double valx, double valy, double weight) ;
	//  void Print (bool isLog = false, int rebinx = 1, int rebiny = 1) ;
	//  void PrintEach () ;
	void Scale (int index, double factor) ;
	void Write (const std::string& dirName, TFile & outputFile) ;

private :

	TString m_baseName ;
	std::vector <TH2F*> m_histos ;

} ;

#endif
