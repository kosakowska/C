//Thinkful - Logic Drills: Traffic light

enum light {GREEN, YELLOW, RED};

enum light update_light (enum light light)
{
  return light==2 ? GREEN:light+1;
}
