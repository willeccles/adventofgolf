v,p[];main(d,n){for(;scanf("%c%d, ",&d,&n)>1;)p[(v=v+~d&3)&1]+=v>1?-n:n;printf("%d",abs(*p)+abs(p[1]));}
