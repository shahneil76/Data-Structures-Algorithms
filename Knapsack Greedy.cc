#include<iostream>
using namespace std;

int KnapSack(int no,int W[],int P[],int w)
{
    int n=no,tp=0;
    int i,j,c,x[n];
    c=w;

    for(i=0;i<n;i++)
    {
        if(W[i]>c)
        {
            x[i]=0;
            break;
        }
        else
        {
            x[i]=1;
            tp+=P[i];
            c-=W[i];
        }
    }

    if(i<n)
    {
        x[i]=c/W[i];
    }

    tp+=(x[i]*P[i]);

    return tp;

}

int main()
{
    int i,j,no,w,temp;

    cout<<"Enter Total  Capacity :";
    cin>>w;

    cout<<"Enter No of Items :";
    cin>>no;

    int P[no],W[no],R[no];

    for(i=0;i<no;i++)
    {
        cout<<"Enter Value["<<i<<"]";
        cin>>P[i];
        cout<<"Enter Weight["<<i<<"]";
        cin>>W[i];
    }

    for(i=0;i<no;i++)
    {
      R[i]=P[i]/W[i];
    }

    for(i=0;i<no;i++)
    {
        for(j=i+1;j<no;j++)
        {
            if(R[i]<R[j])
            {
                temp=R[j];
                R[j]=R[i];
                R[i]=temp;

                temp=W[j];
                W[j]=W[i];
                W[i]=temp;

                temp=P[j];
                P[j]=P[i];
                P[i]=temp;
            }
        }
    }

    int tp=KnapSack(no,W,P,w);

    cout<<"Final Profit :"<<tp<<endl;

    return 0;
}
