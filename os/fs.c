#include<stdio.h>

void find_wt(int processes[],int s,int at[],int bt[],int wt[]){

    int st[s];
    st[0]=at[0];
    wt[0]=at[0];
    wt[0]=0;

      
    for(int i=0;i<s;i++){
        st[i]=st[i]+at[i];
        wt[i]=st[i]-at[i];

        if(wt[i]<0){
            wt[i]=0;
            st[i]=at[i];
        }


    }


}

void find_avg_wt(int processes[],int s,int bt[], int at[]){

    int wt[s];
    int total_tat[s];


    find_wt(processes,s,bt,at,wt);

    int total_wt=0;
    printf("process \t at \t bt\t wt\n");

    for(int i=0;i<s ;i++){
        total_wt +=wt[i];
        printf("%d \t\t  %d \t\t %d \t\t %d\n",processes[i],at[i],bt[i],wt[i]);

    }
    float avg_wt =(float) total_wt /s;
    printf("avd_wt: %2f\n",avg_wt);
}



int main(){
    int n;
    printf("Enter the number  of process: ");
    scanf("%d",&n);
    int processes[n],bt[n],at[n];

    for(int i =0;i<n ;i++){
        processes[i]=i+1;
        printf("Enter the at of process:",i+1);
        scanf("%d",&at[i]);

        printf("Enter the bt of process:",i+1);
        scanf("%d",&bt[i]);
        


    }

    find_avg_wt(processes,n, bt, at);

    return 0;

}