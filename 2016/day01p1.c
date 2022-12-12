/* WIP */
t,v;main(d,n){
  for(;scanf("%lc%d, ",&d,&n)&&d>75;) {
    t+=(v=v+~d&3)<2?n:-n;
    printf("%lc%d: v=%d, t=%d\n", d, n, v, t);
  }
  printf("%d\n", abs(t));
}
