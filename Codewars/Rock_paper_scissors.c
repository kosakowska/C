//Rock Paper Scissors!

enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2)
{
  if(p1==p2) return DRAW;
  else if((p1==0&&p2==1)||(p1==1&&p2==2)||(p1==2&&p2==0))return P2_WON;
  return P1_WON;
}
