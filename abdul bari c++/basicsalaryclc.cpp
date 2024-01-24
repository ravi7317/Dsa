#include<iostream>
using namespace std;

int main(){
    double basicSalary, allowancesPercentage,deductionPercentage;
    cout<<"enter the basic salay";
    cin>>basicSalary;
    cout<<"enter the allowance";
    cin>>allowancesPercentage;
    cout<<"enter the deduction";
    cin>>deductionPercentage;
    double allowances = (allowancesPercentage / 100) * basicSalary;
    double deductions = (deductionPercentage / 100) * basicSalary;
    double netSalary=basicSalary+allowancesPercentage-deductionPercentage;
    cout<<netSalary<<"\n";
    cout<<basicSalary<<"\n";
    cout<<allowancesPercentage<<"\n";
    cout<<deductionPercentage<<"\n";
    return 0;
}