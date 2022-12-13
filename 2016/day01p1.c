x,y,v;main(d,n){for(;scanf("%lc%d, ",&d,&n)&&d>75;)*((v=v+~d&3)&1?&x:&y)+=v>1?-n:n;printf("%d",abs(x)+abs(y));}
