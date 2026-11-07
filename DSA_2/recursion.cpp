#include<iostream>
using namespace std;

double fact( double n){
    if(n == 1  || n== 0){
        return 1;
    }
    return (n*fact(n-1));
}

double fibo( double n){
    
    if(n<=1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    return (fibo(n-1)+fibo(n-2));
}

int sum_of_digits(int n){
    if(n<=0){
        return 0;
    }
    return (n%10 + sum_of_digits(n/10));
}

float pow(float p, int q){

    if(q==0){
        return 1;   
    }else if(q>0) {
        return (p*(pow(p, q-1)));
    }else if(q<0){
        return ((1/p)*((pow(p, q+1))));
    }
    return 0;
}

float pow2(float p, int q){
    if(q == 0){
        return 1;
    }
    if(q%2 == 1){
        return p*pow2(p, q-1);
    } else if(q%2 == 0){
        int t;
        t = pow2(p, q/2);
        return t*t ;
    }
    return 1;
}

void arpr( int arr[], int i, int n){
    cout<<arr[i]<<endl;
    if(i<n-1 ){
        arpr(arr, i+1, 5);
    };
};

int maxval(int arr[],int i, int n, int max){
    // static int max;
    if(i>n){return max;}
    if(arr[i]>= max){
        max = arr[i];
    }    
    return maxval(arr, i+1, n , max );
}

int max2( int arr[], int i, int n){
    if(i==n-1){return arr[i];}   
    return max(arr[i], max2(arr, i+1, 5)) ;
}

int sumar(int arr[], int i, int n){
    if(i==n-1){return arr[i];}
    return (arr[i] + sumar(arr, i+1, 5));
}

string remov(string str, int i, int n, char s){
    string newstr ="";
    if(i == n){return "";}
    if(str[i] != s){
        newstr = str[i] + remov(str, i+1, n, s);
    }
    else{
        newstr = remov(str, i+1, n, s);
    }
    return newstr;
}

bool ispali(int num, int *num2){
    if(num>=0 and num<=9){
        int last = (*num2)%10;
        (*num2) /= 10;
        return (num == last);
    }
    bool result = (ispali(num/10, num2) and (num%10) == ((*num2)%10));
    (*num2) /= 10;
    return result;
}

int seq(int n, int m){

    if(m<=n){
        cout<<m;
        seq(n, m+1);
    }
    else if(m>=n){
        return m;
    }
    return 0;
}

void seq2(int n){
    if(n<1){return;}
    seq2(n-1);
    cout<<n<<" ";
}

void seq3(int n, int k){
    if(n<1){return;}
    seq3(n-1, k);
    cout<<n*k<<" ";
}

int sumn(int n, int *sum2){
    if(n<1){return *sum2;}
    sumn(n-1, sum2);
    if(n%2!=0){
        sum2= sum2+n;
        cout<<"+";
        cout<<n<<endl;
    }else{
        sum2= sum2-n;
        cout<<"-";
        cout<<n<<endl;
    }
    return *sum2;
}

int sumn2(int n){
    if(n<1){
        return 0;
    }
    else if(n%2 == 0){
        return (sumn2(n-1) - n);

    }
    else{
        return (sumn2(n-1) + n);
    }
}

int divisor(int x, int y){// not worki; can be solved by euclid's algo;
    int div = 1;
    int ldiv = x-1;
    int rdiv = y-1;

    while(ldiv != rdiv && ldiv>1 && rdiv>1 ){
        // ldiv--;
        // rdiv--;
        if(ldiv>rdiv){
            while(x%ldiv != 0 && ldiv!=x){
                ldiv--;
            }
            cout<<ldiv<<endl;
        }
        if(ldiv<rdiv){
            while(y%rdiv != 0 && rdiv!=y){
                rdiv--;
            }
            cout<<rdiv<<endl;
        }
        if(ldiv == rdiv){
            div = ldiv;
            return div;
        }
    }
    return div;
}

int Euclid_divisor(int x, int y){
    // if(x%y == 0){
    //     return y;
    // }
    // else{
    //     if(y>x){
    //         // int t =x;
    //         // x=y;
    //         // y=t;
    //         Euclid_divisor(y, x);
    //     }
    //     Euclid_divisor(x-y, y);
    // }
    // return 1;

    if(y>x){return Euclid_divisor(y, x);}
    if(y==0){ return x;}
    return Euclid_divisor(y, x%y);
}

int armstrong(int n, int d){
    if(n ==0){return 0;}
    return pow(n%10, d) + armstrong(n/10, d);
};


int main(){

    // cout<<fact(6);
    // cout<<fibo(9);
    // cout<<sum_of_digits(5);
    // cout<<pow2(2, 10);
    int arr[5] = {4, 5, 20, 7, 1};
    // arpr(arr, 0, 5); 
    // int max =0;
    // cout<<maxval(arr, 0, 5, max);
    // cout<<max2(arr, 0, 5);
    // cout<<sumar(arr, 0, 5);
    string strg = "abcaxa";
    // cout<<remov(strg, 0, 5, 'a');
    // int num = 123454321;
    // int num1 = num;
    // int *num2 = &num1;
    // cout<<ispali(num, num2);
    int n = 10;
    // int m = 1;
    // seq(n, m);

    // seq3(n, 5);
    
    int sum =0;
    int *sum2 = &sum;
    // cout<<sumn(10, sum2);
    // cout<<sumn2(5);

    // cout<<divisor(90, 60);
    // cout<<Euclid_divisor(72, 54);


    int arm = armstrong(153, 3);
    cout<<arm;


    
    return 0;
}  