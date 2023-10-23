#include<stdio.h>
#include<string.h>
/*char name[50];
int roll,sub[50],n,j,i,sum;
long id,dob;
float avg;
printf("Enter no of students:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    sum=0;
    avg=0.0;
printf("\nEnter name %d student:",i);
scanf("%s",name);
printf("Enter student id no:");
scanf("%ld",&id);
printf("Enter DOB of the student:");
scanf("%ld",&dob);
printf("Enter roll no. of the student:");
scanf("%d",&roll);
for(j=0;j<5;j++){
    printf("Enter the marks of sub%d",j);
    scanf("%d",&sub[j]);
}
printf("Name is ");
puts(name);
printf("Student %d id is %ld\n",i,id);
printf("Student %d Date of birth is %ld\n",i,dob);
printf("Student %d roll no. is %d\n",i,roll);
for(j=0;j<5;j++)
sum+=sub[j];
avg=sum/5;
printf("Average is %f",avg); 
}
}*/
typedef struct DOB {
    int date;
    int month;
    int year;
} date;

typedef struct Marks {
    int maths, phy, chem, eng, bio;
    int amarks;
} marks;

void avg(int maths, int phy, int chem, int eng, int bio, int avgmarks) {
    int total = maths + phy + chem + eng + bio;
    avgmarks = total / 5;
    return avgmarks;
}

typedef struct Student {
    int id;
    char name[50];
    int age;
    int rollno;
    date dob;
    marks all;
} student;

int main() {
    int n, i;
    printf("Enter the no.: ");
    scanf("%d", &n);
    student st[n];

    printf("Enter the students' details:\n");
    for (i = 0; i < n; i++) {
        printf("Enter ID: ");
        scanf("%d", &st[i].id);
        printf("Name: ");
        scanf("%s",st[i].name);
        printf("Enter age: ");
        scanf("%d", &st[i].age);
        printf("Rollno: ");
        scanf("%d",st[i].rollno);
        printf("Enter DOB: ");
        scanf("%d %d %d", &st[i].dob.date, &st[i].dob.month, &st[i].dob.year);

        printf("Enter marks in Maths, Physics, Chemistry, English, and Biology: ");
        scanf("%d %d %d %d %d", &st[i].all.maths, &st[i].all.phy, &st[i].all.chem, &st[i].all.eng, &st[i].all.bio);

        avg(st[i].all.maths, st[i].all.phy, st[i].all.chem, st[i].all.eng, st[i].all.bio, &st[i].all.amarks);
    }

    printf("\nStudents Information List:\n");
    for (i = 0; i < n; i++) {
        printf("Name: %s\n", st[i].name);
        printf("ID No: %d\n", st[i].id);
        printf("Age: %d\n", st[i].age);
        printf("Roll No: %d\n", st[i].rollno);
        printf("DOB: %d.%d.%d\n", st[i].dob.date, st[i].dob.month, st[i].dob.year);
        printf("AVG: %d\n", st[i].all.amarks);
    }

    return 0;
}