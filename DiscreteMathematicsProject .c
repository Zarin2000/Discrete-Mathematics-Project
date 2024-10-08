#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int a[5000][5000];

int main(){

    clock_t begin,end;
    double find_time;
    int k=10*10*10*10*10*10*10*10*10;
    int n,i,j,in_degree,degree1=0,out_degree,degree2=0;
    scanf("%d",&n);
    srand(time(0));

    begin=clock();

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
           a[i][j]=rand()%2;
            printf(" %d",a[i][j]);
        }
            printf("\n");
    }
      printf("outdegree""\t");
      printf("indegree");
      printf("\n");

    for(i=0;i<n;i++){
        in_degree=0,out_degree=0;

        for(j=0;j<n;j++){

            if(a[i][j]==1){

                out_degree++;
                degree1++;
            }

            if(a[j][i]==1){

                in_degree++;
                degree2++;

            }
        }

    printf("d%d",i);
    printf("=%d\t\t",out_degree);
    printf("d%d",i);
    printf("=%d\n",in_degree);
    }

    if(degree1==degree2)
    {
        printf("indegree & outdegree are equal");
    }
    else
    {
        printf("0");
    }
    printf("\n");
    end=clock();
    find_time=( ((double) (end-begin)) / CLOCKS_PER_SEC)*k;
    printf("\n this program took %f nanoseconds to execute \n",find_time);
  }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  #include<stdio.h>
