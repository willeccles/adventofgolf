// WIP
int x, y;
int v;
int main(void) {
  int d;
  int n;
  for (;scanf("%lc%d, ", &d, &n)&&d>75;) {
    printf("%c%d\n", d, n);
    // this can be done in one statement for sure
    if (d=='R') { v = (v + 1) % 4; }
    if (d=='L') { v = v ? (v - 1) % 4 : 3; }
    if (v==0||v==2) y+=n*(-1*!!v);
    if (v==1||v==3) x+=n*(-1*!!(v-1));
  }
  printf("(%d, %d) => %d\n", x, y, abs(x) + abs(y));
}
