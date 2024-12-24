#include <iostream>
using namespace std;
int main(int argc, char** argv){


 	float internalexams, externalexams , average;
 	float management, accounting , cplus , geography , economics;
 	float politicalscience , generalknowledge , oral;
 	int idnumber;
 	char another;

 	cout<<"Enter your Student ID number"<<endl;
 	cin>>idnumber;
 	cout<<endl;

 	               // Internal exam marks
 	cout<<"\t \t ENTER YOUR INTERNAL EXAMS MARKS "<<endl;
 	cout<<endl;

 	cout<<"Enter your Management marks: ";
 	cin>>management;
 	cout<<"Your grade is: ";
 	if (management>=80){
	 cout<<"A"<<endl;
    }else if(management>=70){
    	cout<<"B"<<endl;
	}else if(management>=60){
	cout<<"C"<<endl;
	}else if(management>=50){
		cout<<"D"<<endl;
	}else if(management>=40){
		cout<<"E"<<endl;
	}else{
		cout<<"F"<<endl;
    }
 	cout<<endl;

 	cout<<"Enter your Accounting marks: ";
 	cin>>accounting;
 	cout<<"Your grade is: ";
 	if (accounting>=80){
	 cout<<"A"<<endl;
    }else if(accounting>=70){
    	cout<<"B"<<endl;
	}else if(accounting>=60){
	cout<<"C"<<endl;
	}else if(accounting>=50){
		cout<<"D"<<endl;
	}else if(accounting>=40){
		cout<<"E"<<endl;
	}else{
		cout<<"F"<<endl;
    }
 	cout<<endl;

 	cout<<"Enter your C++ marks: ";
 	cin>>cplus;
 	cout<<"Your grade is: ";
 	if (cplus>=80){
	 cout<<"A"<<endl;
    }else if(cplus>=70){
    	cout<<"B"<<endl;
	}else if(cplus>=60){
	cout<<"C"<<endl;
	}else if(cplus>=50){
		cout<<"D"<<endl;
	}else if(cplus>=40){
		cout<<"E"<<endl;
	}else{
		cout<<"F"<<endl;
    }
 	cout<<endl;

 	cout<<"Enter your Geography marks: ";
 	cin>>geography;
 	cout<<"Your grade is: ";
 	if (geography>=80){
	 cout<<"A"<<endl;
    }else if(geography>=70){
    	cout<<"B"<<endl;
	}else if(geography>=60){
		cout<<"C"<<endl;
	}else if(geography>=50){
		cout<<"D"<<endl;
	}else if(geography>=40){
		cout<<"E"<<endl;
	}else{
		cout<<"F"<<endl;
    }
	cout<<endl;

 	cout<<"Enter your Economics marks: ";
 	cin>>economics;
 	cout<<"Your grade is: ";
 	if (economics>=80){
	 cout<<"A"<<endl;
    }else if(economics>=70){
    	cout<<"B"<<endl;
	}else if(economics>=60){
	cout<<"C"<<endl;
	}else if(economics>=50){
		cout<<"D"<<endl;
	}else if(economics>=40){
		cout<<"E"<<endl;
	}else{
		cout<<"F"<<endl;
    }
 	cout<<endl;

 	internalexams = management + accounting + cplus + geography + economics;
 	cout<<"Your total internal exams is: "<<internalexams<<endl;
 	average = internalexams/5;
 	cout<<"Your average is: "<<average<<endl;
 	cout<<"\n"<<endl;

 		cout<<"==================== STUDENT ID NUMBER: "<<idnumber<<" ==================="<<endl;
 		cout<<"======================================================================"<<endl;
 		cout<<"Management                          |                     "<<management<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"Accounting                          |                     "<<accounting<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"C++                                 |                     "<<cplus<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"Geography                           |                      "<<geography<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"economics                           |                      "<<economics<<endl;
 		cout<<"======================================================================"<<endl;
 		cout<<"\n"<<endl;

 					//External marks

 	cout<<"\t \t ENTER YOUR EXTERNAL EXAMS MARKS "<<endl;
 	cout<<endl;

 	cout<<"Enter your Political Science marks: ";
 	cin>>politicalscience;
 	cout<<"Your grade is: ";
 	if (politicalscience>=80){
	 cout<<"A"<<endl;
    }else if(politicalscience>=70){
    	cout<<"B"<<endl;
	}else if(politicalscience>=60){
	cout<<"C"<<endl;
	}else if(politicalscience>=50){
		cout<<"D"<<endl;
	}else if(politicalscience>=40){
		cout<<"E"<<endl;
	}else{
		cout<<"F"<<endl;
    }
 	cout<<endl;

 	cout<<"Enter your General Knowledge marks: ";
 	cin>>generalknowledge;
 	cout<<"Your grade is: ";
 	if (generalknowledge>=80){
	 cout<<"A"<<endl;
    }else if(generalknowledge>=70){
    	cout<<"B"<<endl;
	}else if(generalknowledge>=60){
	cout<<"C"<<endl;
	}else if(generalknowledge>=50){
		cout<<"D"<<endl;
	}else if(generalknowledge>=40){
		cout<<"E"<<endl;
	}else{
		cout<<"F"<<endl;
    }
 	cout<<endl;

 	cout<<"Enter your Oral marks: ";
 	cin>>oral;
 	cout<<endl;
 	cout<<"Your grade is: ";
 	if (oral>=80){
	 cout<<"A"<<endl;
    }else if(oral>=70){
    	cout<<"B"<<endl;
	}else if(oral>=60){
	cout<<"C"<<endl;
	}else if(oral>=50){
		cout<<"D"<<endl;
	}else if(oral>=40){
		cout<<"E"<<endl;
	}else{
		cout<<"F"<<endl;
    }
 	cout<<endl;

 	externalexams = politicalscience + generalknowledge + oral;
 	cout<<"Your total External exams is: "<<externalexams<<endl;
 	average = externalexams/3;
 	cout<<"Your average is: "<<average<<endl;
 	cout<<"\n"<<endl;

 		cout<<"===================== STUDENT ID NUMBER: "<<idnumber<<" ====================="<<endl;
 		cout<<"======================================================================"<<endl;
 		cout<<"Political Science                          |                     "<<politicalscience<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"General Knowledge                          |                     "<<generalknowledge<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"Oral                                       |                     "<<oral<<endl;
 		cout<<"======================================================================"<<endl;
 		cout<<"\n"<<endl;

							//second entry

 	cout << " To enter another student\n Press N \n And to exist press any other letter"<<endl;
    cin >> another;

 	if(another == 'N'){
	 	cout<<"Enter your Student ID number"<<endl;
	 	cin>>idnumber;
	 	cout<<endl;

 		cout<<"\t \t ENTER YOUR INTERNAL EXAMS MARKS "<<endl;
 		cout<<endl;

	 	cout<<"Enter your Management marks: ";
	 	cin>>management;
	 	cout<<"Your grade is: ";
	 	if (management>=80){
		 cout<<"A"<<endl;
	    }else if(management>=70){
	    	cout<<"B"<<endl;
		}else if(management>=60){
		cout<<"C"<<endl;
		}else if(management>=50){
			cout<<"D"<<endl;
		}else if(management>=40){
			cout<<"E"<<endl;
		}else{
			cout<<"F"<<endl;
	    }
	 	cout<<endl;

	 	cout<<"Enter your Accounting marks: ";
	 	cin>>accounting;
	 	cout<<"Your grade is: ";
	 	if (accounting>=80){
		 cout<<"A"<<endl;
	    }else if(accounting>=70){
	    	cout<<"B"<<endl;
		}else if(accounting>=60){
		cout<<"C"<<endl;
		}else if(accounting>=50){
			cout<<"D"<<endl;
		}else if(accounting>=40){
			cout<<"E"<<endl;
		}
		else{
			cout<<"F"<<endl;
	    }
	 	cout<<endl;

	 	cout<<"Enter your C++ marks: ";
	 	cin>>cplus;
	 	cout<<"Your grade is: ";
	 	if (cplus>=80){
		 cout<<"A"<<endl;
	    }
	    else if(cplus>=70){
	    	cout<<"B"<<endl;
		}else if(cplus>=60){
		cout<<"C"<<endl;
		}
		else if(cplus>=50){
			cout<<"D"<<endl;
		}else if(cplus>=40){
			cout<<"E"<<endl;
		}else{
			cout<<"F"<<endl;
	    }
	 	cout<<endl;

	 	cout<<"Enter your Geography marks: ";
	 	cin>>geography;
	 	cout<<"Your grade is: ";
	 	if (geography>=80){
		 cout<<"A"<<endl;
	    }else if(geography>=70){
	    	cout<<"B"<<endl;
		}else if(geography>=60){
		cout<<"C"<<endl;
		}else if(geography>=50){
			cout<<"D"<<endl;
		}
		else if(geography>=40){
			cout<<"E"<<endl;
		}else{
			cout<<"F"<<endl;
	    }
	 	cout<<endl;

	 	cout<<"Enter your Economics marks: ";
	 	cin>>economics;
	 	cout<<"Your grade is: ";
	 	if (economics>=80){
		 cout<<"A"<<endl;
	    }else if(economics>=70){
	    	cout<<"B"<<endl;
		}else if(economics>=60){
		cout<<"C"<<endl;
		}else if(economics>=50){
			cout<<"D"<<endl;
		}else if(economics>=40){
			cout<<"E"<<endl;
		}else{
			cout<<"F"<<endl;
	    }
	 	cout<<endl;

	 	internalexams = management + accounting + cplus + geography + economics;
	 	cout<<"Your total internal exams is: "<<internalexams<<endl;
	 	average = internalexams/5;
	 	cout<<"Your average is: "<<average<<endl;
	 	cout<<"\n"<<endl;

 		cout<<"==================== STUDENT ID NUMBER: "<<idnumber<<" ===================="<<endl;
 		cout<<"======================================================================"<<endl;
 		cout<<"Management                          |                     "<<management<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"Accounting                          |                     "<<accounting<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"C++                                 |                     "<<cplus<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"Geography                           |                      "<<geography<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"economics                           |                      "<<economics<<endl;
 		cout<<"======================================================================"<<endl;
 		cout<<"\n"<<endl;

 					//External marks

	 	cout<<"\t \t ENTER YOUR EXTERNAL EXAMS MARKS "<<endl;
	 	cout<<endl;

	 	cout<<"Enter your Political Science marks: ";
	 	cin>>politicalscience;
	 	cout<<"Your grade is: ";
	 	if (politicalscience>=80){
		 cout<<"A"<<endl;
	    }else if(politicalscience>=70){
	    	cout<<"B"<<endl;
		}else if(politicalscience>=60){
		cout<<"C"<<endl;
		}else if(politicalscience>=50){
			cout<<"D"<<endl;
		}else if(politicalscience>=40){
			cout<<"E"<<endl;
		}else{
			cout<<"F"<<endl;
	    }
	 	cout<<endl;

	 	cout<<"Enter your General Knowledge marks: ";
	 	cin>>generalknowledge;
	 	cout<<"Your grade is: ";
	 	if (generalknowledge>=80){
		 cout<<"A"<<endl;
	    }else if(generalknowledge>=70){
	    	cout<<"B"<<endl;
		}else if(generalknowledge>=60){
		cout<<"C"<<endl;
		}else if(generalknowledge>=50){
			cout<<"D"<<endl;
		}else if(generalknowledge>=40){
			cout<<"E"<<endl;
		}else{
			cout<<"F"<<endl;
	    }
	 	cout<<endl;

	 	cout<<"Enter your Oral marks: ";
	 	cin>>oral;
	 	cout<<endl;
	 	cout<<"Your grade is: ";
	 	if (oral>=80){
		 	cout<<"A"<<endl;
	    }else if(oral>=70){
	    	cout<<"B"<<endl;
		}else if(oral>=60){
			cout<<"C"<<endl;
		}else if(oral>=50){
			cout<<"D"<<endl;
		}else if(oral>=40){
			cout<<"E"<<endl;
		}else{
			cout<<"F"<<endl;
	    }
	 	cout<<endl;

	 	externalexams = politicalscience + generalknowledge + oral;
	 	cout<<"Your total External exams is: "<<externalexams<<endl;
	 	average = externalexams/3;
	 	cout<<"Your average is: "<<average<<endl;
	 	cout<<"\n"<<endl;

 		cout<<"====================STUDENT ID NUMBER: "<<idnumber<<" ====================="<<endl;
 		cout<<"======================================================================"<<endl;
 		cout<<"Political Science                          |                     "<<politicalscience<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"General Knowledge                          |                     "<<generalknowledge<<endl;
 		cout<<"----------------------------------------------------------------------"<<endl;
 		cout<<"Oral                                       |                     "<<oral<<endl;
 		cout<<"======================================================================"<<endl;
 		cout<<"\n"<<endl;

	 }else{
	 	cout<<"Program ended......";
	 }

 	return 0;
}
}



