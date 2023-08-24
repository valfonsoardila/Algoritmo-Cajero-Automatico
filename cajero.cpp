#include<iostream>
using namespace std;

int main(){
	
	int monto;
	int billetes2[4]={10,20,50,100};
	int billetes[4]={0,0,0,0};
	cout<<"Digita el monto a retirar: ";cin>>monto;
	for(int i =0;i<4;i++){//lleva la cueta del carri
		for(int j =i;j<4;j++){
			if(monto>=billetes2[j]){
				cout<<i<<","<<j<<endl;
				monto=monto-billetes2[j];
				billetes[j]=billetes[j]+1;
				cout<<"entro al si del if"<<endl;
				cout<<monto<<" "<< billetes[j]<<endl;
			}else{
				j=4;
			}
			if(monto==0){
				i=4;
				j=4;
			}
			if (i==3&&monto!=0){
				i=0-1;
			}
			
		}
	}
	
	

	cout<<"Billetes$ denominacion:  "<<billetes2[3]<<"k "<<billetes2[2]<<"k "<<billetes2[1]<<"k "<<billetes2[0]<<"k "<<endl;
	cout<<"cantidad de billetes   :    "<<billetes[3]<<"   "<<billetes[2]<<"   "<<billetes[1]<<"   "<<billetes[0]<<"  "<<endl;
	
	system("pause");
	return 0;
}









	
