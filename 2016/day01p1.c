x,y,v;main(d,n){for(;scanf("%c%d, ",&d,&n)>1;)*((v=v+~d&3)&1?&x:&y)+=v>1?-n:n;printf("%d",abs(x)+abs(y));}
