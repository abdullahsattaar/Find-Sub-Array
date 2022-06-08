#include<iostream>
using namespace std;
int findarr(int arrmain[], int arrsub[], int sizemain, int sizesub)
{
	if (sizemain>sizesub)
	{
	int count=0;
	for(int i=0; i<sizemain; i++)
	{
		int subcount=0;
		if (arrsub[0]==arrmain[i])	
			for(int j=1;j<sizesub;j++)
			{
				if( arrsub[j]==arrmain[j+i])
					subcount++;
			}
		if (subcount==sizesub-1)
			count++;
	}
	return count;
	}
	else 
		return 0;


}
int main()
{
	int sizemain;
	cout<<"Enter size of main array: "<<endl;	
	cin>>sizemain;
	int *mainarr= new int[sizemain];
	cout<<"Enter main array integers:"<<endl;
	for (int i=0;i<sizemain;i++)
		cin>>mainarr[i];
	int sizesub;
	cout<<"Enter size of sub array: "<<endl;
	cin>>sizesub;
	int *subarr=new int[sizesub];
	cout<<"Enter sub array integers: "<<endl;
	for (int i=0;i<sizesub;i++)
		cin>>subarr[i];
	int x=findarr(mainarr,subarr,sizemain,sizesub);

	cout<<"Total No of occurrences: "<<x<<endl;


	system("pause");
	return 0;
}