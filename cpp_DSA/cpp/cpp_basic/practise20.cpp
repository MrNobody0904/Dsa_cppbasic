// PATTERN BASED QUESTION 
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // P-2
    for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++) {
        cout << "* ";
    }
    cout << endl;
}
// P-3
for(int i=n;i>=1;i--) {
    for(int j=1;j<=i;j++) {
        cout << "* ";
    }
    cout << endl;
}
//P-4

for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++) {
        cout << j << " ";
    }
    cout << endl;
}
//P-5

for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++) {
        cout << i << " ";
    }
    cout << endl;
}

int num = 1;

for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++) {
        cout << num++ << " ";
    }
    cout << endl;

    //P-6
}
for(int i=1;i<=n;i++) {

    for(int j=1;j<=n-i;j++)
        cout << " ";

    for(int j=1;j<=2*i-1;j++)
        cout << "*";

    cout << endl;
}



for(int i=n;i>=1;i--) {

    for(int j=1;j<=n-i;j++)
        cout << " ";

    for(int j=1;j<=2*i-1;j++)
        cout << "*";

    cout << endl;
}
// Upper
for(int i=1;i<=n;i++) {

    for(int j=1;j<=n-i;j++)
        cout<<" ";

    for(int j=1;j<=2*i-1;j++)
        cout<<"*";

    cout<<endl;
}

// Lower
for(int i=n-1;i>=1;i--) {

    for(int j=1;j<=n-i;j++)
        cout<<" ";

    for(int j=1;j<=2*i-1;j++)
        cout<<"*";

    cout<<endl;
}



for(int i=1;i<=n;i++) {
    for(int j=1;j<=n;j++) {

        if(i==1 || i==n || j==1 || j==n)
            cout<<"* ";
        else
            cout<<"  ";
    }
    cout<<endl;
}



for(int i=1;i<=n;i++) {

    for(int j=1;j<=n-i;j++)
        cout<<" ";

    for(int j=1;j<=2*i-1;j++) {

        if(j==1 || j==2*i-1 || i==n)
            cout<<"*";
        else
            cout<<" ";
    }
    cout<<endl;
}




for(int i=1;i<=n;i++) {

    for(int j=1;j<=i;j++)
        cout<<"*";

    for(int j=1;j<=2*(n-i);j++)
        cout<<" ";

    for(int j=1;j<=i;j++)
        cout<<"*";

    cout<<endl;
}



for(int i=n;i>=1;i--) {

    for(int j=1;j<=i;j++)
        cout<<"*";

    for(int j=1;j<=2*(n-i);j++)
        cout<<" ";

    for(int j=1;j<=i;j++)
        cout<<"*";

    cout<<endl;
}




for(int i=0;i<n;i++) {

    int num = 1;

    for(int j=0;j<=i;j++) {
        cout << num << " ";
        num = num * (i-j) / (j+1);
    }

    cout << endl;
}



for(int i=1;i<=n;i++) {

    char ch='A';

    for(int j=1;j<=i;j++) {
        cout<<ch<<" ";
        ch++;
    }

    cout<<endl;
}

}

