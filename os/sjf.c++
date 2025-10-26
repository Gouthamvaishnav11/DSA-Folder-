#include<iostream>
using namespace std;
int main(){
    int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avg_wt,avg_tat;
    cout<<"Enter number of processes: ";
    cin>>n;
    cout<<"Enter Burst Time for each process: ";
    for(i=0;i<n;i++){
        cout<<"P"<<i+1<<": ";
        cin>>bt[i];
        p[i]=i+1;           
    }
    //sorting burst time in ascending order using selection sort
    for(i=0;i<n;i++){
        pos=i;
        for(j=i+1;j<n;j++){
            if(bt[j]<bt[pos])
                pos=j;
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0;
    //calculating waiting time
    for(i=1;i<n;i++){
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
        total+=wt[i];
    }
    avg_wt=(float)total/n;
    total=0;
    cout<<"\nProcess\tBurst Time\tWaiting Time\tTurnaround Time";
    //calculating turnaround time
    for(i=0;i<n;i++){
        tat[i]=bt[i]+wt[i];
        total+=tat[i];
        cout<<"\nP"<<p[i]<<"\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i];
    }
    avg_tat=(float)total/n;
    cout<<"\nAverage Waiting Time: "<<avg_wt;
    cout<<"\nAverage Turnaround Time: "<<avg_tat;
    return 0;

    

}
