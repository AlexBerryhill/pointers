/*************************************************************************
* Program:                                                                 
*    Assignment 33, pointers                                               
*    Brother Ridges, CS124                                                 
* Author:                                                                  
*    Alexander Berryhill                                                   
* Summary:                                                                 
*    This program will prompt and get card balances and date costs then    
*    take it out of the highest card balance.                              
*                                                                          
*                                                                          
*                                                                          
*    Estimated:  0.5 hrs                                                   
*    Actual:     0.5 hrs                                                   
*      The most difficult part was doing all the reading                   
*************************************************************************/

#include <iostream>
using namespace std;

/*************************************************************************
 * getBalance will prompt and get sam's and sue's balances.                
 ************************************************************************/
 
void getBalance(float *pSam, float *pSue)
{
   cout << "What is Sam's balance? ";
   cin >> *pSam;
   cout << "What is Sue's balance? ";
   cin.ignore(256, '\n');
   cin >> *pSue;
   return;
}

/************************************************************************* * 
 * date will subtract the costs from the highest balance.                  
 ************************************************************************/
void date(float * pAccount)
{
   float temp;
   char dateStuff[3][256] = {"Dinner:    ", "Movie:     ", "Ice cream: "};
   
   cout << "Cost of the date:\n";
   for (int i = 0; i < 3; i++)
   {
      cout << "\t" << dateStuff[i];
      cin >> temp;
      *pAccount -= temp;
   }
   return;
}
/*************************************************************************
 * display will display sam's and sue's final balance                      
 ************************************************************************/
 
void display(float *pSam, float *pSue)
{
   cout << "Sam's balance: $" << *pSam << endl;
   cout << "Sue's balance: $" << *pSue << endl;
}

/*************************************************************************
 * main will initialize the pointer values call getBalance to fill them    
 * find the largest and have date subtract costs, then display.            
 ************************************************************************/
int main()
{
   float sam;
   float sue;
   
   float * pSam;
   float * pSue;

   pSam = &sam;
   pSue = &sue;

   getBalance(pSam, pSue);
   if (*pSam > *pSue)
      date(pSam);
   else
      date(pSue);
   display(pSam, pSue);

   return 0;
}








