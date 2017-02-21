#include<stdio.h>
typedef struct Student{
    char name[30];
    int  final_grade;
    int  class_grade;
    char ganbu;
    char western;
    int  essey;
    int money;
}Stu;
int main(){
    int times;int max,i,pos=1,sum=0;
    Stu student[1000];
    scanf("%d",&times);
    for(i=1;i<=times;i++){
        student[i].money=0;
        scanf("%s%d%d%s%s%d",student[i].name,&student[i].final_grade,
              &student[i].class_grade,&student[i].ganbu,
              &student[i].western,&student[i].essey);
        if(student[i].final_grade>80&&student[i].essey>=1){
            student[i].money+=8000;  //院士奖学金
        }
        if(student[i].final_grade>85&&student[i].class_grade>80){
            student[i].money+=4000;  //五四奖学金
        }
        if(student[i].final_grade>90){
            student[i].money+=2000;       //成绩优秀奖
        }
        if(student[i].western=='Y'&&student[i].final_grade>85){
            student[i].money+=1000;   //西部
        }
        if(student[i].class_grade>80&&student[i].ganbu=='Y'){
            student[i].money+=850;   //班级
        }
    }        //计算可以得到多少奖学金
    max=0;
    for(int i=1;i<=times;i++)
    {
        sum+=student[i].money;
        if(student[i].money>max)
        {max=student[i].money;
            pos=i;}
    }
    printf("%s\n%d\n%d\n",student[pos].name,max,sum);
}