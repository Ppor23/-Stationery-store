#include <iostream>
using namespace std;
int main()
{
	int main=0,pencil=0,eraser=0,notebook=0,money=0,change=0;
	int Cnotebook=0,Cpencil=0,Ceraser=0,CPnotebook=0,CPpencil=0,CPeraser=0,Ptotal=0,CPtotal=0;
	int b1000,b500,b100,b50,b20,c10,c5,c2,c1;
	char again='Y';
	do
	{
		cout<<"_Welcome_"<<endl;
		cout<<"1.Sell"<<endl;
		cout<<"2.Result"<<endl;
		cout<<"3.Exit!"<<endl;
		cout<<"Select:";
		cin>>main;
		switch(main)
		{
			case 1 :
				do
				{
					system("cls");
					//NOTEBOOK
					cout<<"Enter Notebook(10 Baht):";
					cin>>notebook;
					Cnotebook+=notebook;
                    CPnotebook+=(notebook*10);
                    cout << " Price is "<<notebook*10<<" Baht"<<endl<<endl;
                   //PENCIL
					cout<<endl;
					cout<<"Enter Pencil(8 Baht):";
					cin>>pencil;
					Cpencil+=pencil;
                    CPpencil+=(pencil*8);
                    cout << " Price is "<<pencil*8<<" Baht"<<endl<<endl;
                   //ERASER
					cout<<endl;
					cout<<"Enter eraser(6 Baht):";
					cin>>eraser;
					Ceraser+=eraser;
					CPeraser+=(eraser*6);
					cout << " Price is "<<eraser*6<<" Baht"<<endl<<endl;
					Ptotal=(notebook*10)+(pencil*8)+(eraser*6);  
					cout<<endl;
					cout <<endl<< " Total Price : "<<Ptotal<<" Baht"<<endl;
                    CPtotal+=Ptotal;
					//MONEY
					cout<<"Enter Money:";
					cin>>money;
					change=money-Ptotal;
					cout<<endl;
					cout << " Change total : "<<change<<" Baht"<<endl;
					
					b1000 = change / 1000;
                    change = change % 1000;
                    b500 = change / 500;
                    change = change % 500;   
                    b100 = change / 100;
                    change = change % 100;   
                    b50 = change / 50;
                    change = change % 50;    
                    b20 = change / 20;
                    change = change % 20;    
                    c10 = change / 10;
                    change = change % 10;    
                    c5 = change / 5;
                    change = change % 5;         
                    c2 = change / 2;
                    change = change % 2;
                    c1 = change / 1;
                    change = change % 1;
                   
                    if (b1000>0)
					{
                        cout <<" 1000 Baht = "<<b1000<<endl;
                    }
                    if (b500>0)
				    {
                        cout <<" 500 Baht = "<<b500<<endl;
                    }
                    if (b100>0)
					{
                        cout <<" 100 Baht = "<<b100<<endl;
                    }
                    if (b50>0)
					{
                        cout <<" 50 Baht = "<<b50<<endl;
                    }
                    if (b20>0)
					{
                        cout <<" 20 Baht = "<<b20<<endl;
                    }
                    if (c10>0)
				    {
                        cout <<" 10 Baht = "<<c10<<endl;
                    }
                    if (c5>0)
					{
                        cout <<" 5 Baht = "<<c5<<endl;
                    }
                    if (c2>0)
					{
                        cout <<" 2 Baht = "<<c2<<endl;
                    }
                    if (c1>0)
					{
                        cout <<" 1 Baht = "<<c1<<endl;
                    }
                    cout<<endl<<"Again?(Y/N) ";
                    cin>>again;
				}
				while((again == 'Y') || (again == 'y'));         
                system("cls");      
				break;   
			//result
			case 2 :
				{
					system("cls");
					//notebook result
					cout << " Sales Note book = "<<Cnotebook<<" Notebook(s)"<<endl;               
                	cout << " Total price is "<<CPnotebook <<" Baht"<<endl<<endl;
 				    //pencil result
                	cout << " Sales Pencil = "<<Cpencil<<" Pencil(s)"<<endl;               
                	cout << " Total price is "<<CPpencil<<" Baht"<<endl<<endl;
               	    //eraser result
                	cout << " Sales Eraser = "<<Ceraser<<" Eraser(s)"<<endl;               
                	cout << " Total price is "<<CPeraser <<" Baht"<<endl<<endl;
                	cout<<"-----------------------------------------------------"<<endl;
                	cout<<"Result = "<<CPtotal<<" Baht"<<endl;
                	cout<<"-----------------------------------------------------"<<endl;
                	system(" pause");
                	system("cls");
                	break;       
				} 
			case 3 :
				{
					system("cls");
					cout<<"THANK YOU!";
					break;
				}
			default:
				{
					cout<<"ERROR!";
				}
		}
	}
	while((main==1)||(main==2)); 
    return 0;  
}
