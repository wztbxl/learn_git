#include "TFile.h"
#include "TH2Poly.h"
#include "TH2D.h"
#include "TH2F.h"
#include "TH1F.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TRandom3.h"
#include "TString.h"
#include "TStyle.h"
#include "TLegend.h"
#include "TGraph.h"
#include "TLine.h"
#include "TVector2.h"

#include<fstream>

using namespace std;

#include "/Users/wztbxl/Documents/macros/function.C"

void getEdge()
{
    double step_length = 3.2;
    double frist_Ledge = 3.41;
    double frist_Redge = 6.61;
    double frist_Ledge_X = 14.35;
    double frist_Redge_X = 17.55;
    double frist_Ledge_Diag = 17.82;
    double frist_Redge_Diag = 21.02;
    int nRow3 = 151;
    int nRow4 = 58;
    int nRow1 = 167;

    // ofstream Row3;
    // Row3.open("Row3.txt",ios::out);
    // FILE* Row3 = fopen("Row3.txt","w+");
    // fprintf(Row3,"%-10d %-10f %-10f",i,frist_Ledge,frist_Redge);
    // Row3 << "nStrip        StripLedge    StripRedge    " <<endl;
    // ofstream Row4;
    // FILE* Row4 = fopen("Row4.txt","w+");
    // Row4.open("Row4.txt",ios::out);
    // Row4 << "nStrip        StripLedge    StripRedge    " <<endl;
    FILE* Row1 = fopen("Row4_edge.txt","w+");
    FILE* Row3 = fopen("Row1.txt","w+");



    // for ( int i = 0; i < nRow3; i++ )
    // {
    //     cout.precision(6);
    //     fprintf(Row3,"%-10d %-10.2f %-10.2f \n",i,i*step_length+frist_Ledge,i*step_length+frist_Redge);
    //     // Row3 << i << "             " << frist_Ledge << "         " << frist_Redge << "         " << endl;
    //     if ( i < nRow4)
    //         // Row4 << i << "             " << frist_Ledge << "         " << frist_Redge << "         " << endl;
    //     fprintf(Row4,"%-10d %-10.2f %-10.2f \n",i,i*step_length+frist_Ledge,i*step_length+frist_Redge);
    // }

    // for ( int i = 0; i < nRow1; i++ )
    // {
    //     cout.precision(6);
    //     fprintf(Row1,"%-10d %-10.2f %-10.2f \n",i,i*step_length+frist_Ledge_X,i*step_length+frist_Redge_X);
    // }
    // for ( int i = 0; i < nRow1; i++ )
    // {
    //     cout.precision(6);
    //     fprintf(Row1,"%-10d %-10.2f \n",i+1,( (i*step_length+frist_Ledge_Diag) + (i*step_length+frist_Redge_Diag))/2 );
    // }
    for ( int i = 0; i < nRow3; i++ )
    {
        cout.precision(6);
        fprintf(Row3,"%-10d %-10.2f \n",i+1,( (i*step_length+frist_Ledge_X) + (i*step_length+frist_Redge_X))/2);
    }

    for ( int i = 0; i < nRow3; i++ )
    {
        cout.precision(6);
        fprintf(Row1,"%-10d %-10.2f %-10.2f \n",i+1,i*step_length+frist_Ledge_Diag,i*step_length+frist_Redge_Diag);
    }

    // Row3.close();
    // Row4.close();
    // Row4.close();
}