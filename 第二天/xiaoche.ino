void  setup（）
{
  pinMode（5，OUTPUT）;
  pinMode（6，OUTPUT）;
  pinMode（9，OUTPUT）;
  pinMode（10，OUTPUT）;
  串行。开始（9600）;
}


int收入;
void  loop（）
{
  如果（串行。可用的（）> 0）{
    收入=串行。read（）;
  }
  开关（收入）{
    案例 ' F '：FORWARD（）; 打破 ;
    案例 ' B '：BACKWARD（）; 打破 ;
    情况下 '大号'：LEFT（）; 打破 ;
    情况下 ' - [R '：RIGHT（）; 打破 ;
    案例 ' S '：STOP（）; 打破 ;
  }
}

void   FORWARD（）
{
  digitalWrite（5，HIGH）;
  digitalWrite（6，LOW）;
  digitalWrite（9，HIGH）;
  digitalWrite（10，LOW）;
}
void   BACKWARD（）
{
  digitalWrite（5，LOW）;
  digitalWrite（6，HIGH）;
  digitalWrite（9，LOW）;
  digitalWrite（10，HIGH）;
}
void   LEFT（）
{
   digitalWrite（5，HIGH）;
  digitalWrite（6，LOW）;
  digitalWrite（9，HIGH）;
  digitalWrite（10，LOW）;
}
无效 RIGHT（）
{
   digitalWrite（5，LOW）;
  digitalWrite（6，HIGH）;
  digitalWrite（9，HIGH）;
  digitalWrite（10，LOW）;
}
void  STOP（）
{
   digitalWrite（5，LOW）;
  digitalWrite（6，LOW）;
  digitalWrite（9，LOW）;
  digitalWrite（10，LOW）;
}
