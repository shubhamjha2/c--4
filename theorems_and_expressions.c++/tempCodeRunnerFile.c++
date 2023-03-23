 int n,i;
    cin>>n;
    int ans=1;
    for ( i = n; i > 0; i--)
    {
        ans=ans*i;

    }
    cout<<"the factorial of "<<n<<" is "<<ans;