if(s.empty()){
        s.push(x);
        return;
    }
    int num=s.top();
    s.pop();
    insert_at_bottom(s,x);
    s.push(num);