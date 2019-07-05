＃定义 DEBUG

 MorseBase 类 {
  int _pin;
  const  int clk = 250 ;

上市：
  MorseBase（int8_t引脚）：_ pin（引脚）{ pinMode（引脚，OUTPUT）; }
  inline  void  dit（）{
    digitalWrite（_pin，HIGH）;
    延迟（clk）;
    digitalWrite（_pin，LOW）;
    延迟（clk）;
＃IFDEF DEBUG
    串行。print（'。'）;
＃ENDIF
  }
  inline  void  dah（）{
    digitalWrite（_pin，HIGH）;
    延迟（clk * 3）;
    digitalWrite（_pin，LOW）;
    延迟（clk）;
＃IFDEF DEBUG
    串行。print（' - '）;
＃ENDIF
  }
  inline  void  eoc（）{
    延迟（clk << 1）;
＃IFDEF DEBUG
    串行。print（'  '）;
＃ENDIF
  }
  inline  void  eow（）{
    延迟（（clk << 2）+（clk << 1））;
＃IFDEF DEBUG
    串行。print（“ / ”）;
＃ENDIF
  }
};

MorseBase x（13）;

bool isInitial = true ;
char ch = 0 ;

void  setup（）{Serial。开始（9600）; }

void  loop（）{
  如果（串行。可用的（）> 0）{
    ch =串行。read（）;
    if（isUpperCase（ch））
      ch | = 0x20u ;
    if（isInitial）
      isInitial = false ;
    否则 if（ch！= '  '）
      X。eoc（）;
    其他 {
      isInitial = true ;
      X。eow（）;
    }
    switch（ch）{
      案例 ' a '：x。dit（）; X。dah（）; 打破 ;
      案例 ' b '：x。dah（）; X。dit（）; X。dit（）; X。dit（）; 打破 ;
      案例 ' c '：x。dah（）; X。dit（）; X。dah（）; X。dit（）; 打破 ;
      案例 ' d '：x。dah（）; X。dit（）; X。dit（）; 打破 ;
      案例 ' e '：x。dit（）; 打破 ;
      案例 ' f '：x。dit（）; X。dit（）; X。dah（）; X。dit（）; 打破 ;
      情况下 '克'：X。dah（）; X。dah（）; X。dit（）; 打破 ;
      案例 ' h '：x。dit（）; X。dit（）; X。dit（）; X。dit（）; 打破 ;
      案例 '我'：x。dit（）; X。dit（）; 打破 ;
      案例 ' j '：x。dit（）; X。dah（）; X。dah（）; X。dah（）; 打破 ;
      情况下 ' ķ '：X。dah（）; X。dit（）; X。dah（）; 打破 ;
      情况下 '升'：X。dit（）; X。dah（）; X。dit（）; X。dit（）; 打破 ;
      情况下 '米'：X。dah（）; X。dah（）; 打破 ;
      情况下 ' Ñ '：X。dah（）; X。dit（）; 打破 ;
      案例 ' o '：x。dah（）; X。dah（）; X。dah（）; 打破 ;
      案例 ' p '：x。dit（）; X。dah（）; X。dah（）; X。dit（）; 打破 ;
      情况下 ' q '：X。dah（）; X。dah（）; X。dit（）; X。dah（）; 打破 ;
      情况下 ' - [R '：X。dit（）; X。dah（）; X。dit（）; 打破 ;
      情况下 '小号'：X。dit（）; X。dit（）; X。dit（）; X。dit（）; 打破 ;
      情况下 '吨'：X。dah（）; 打破 ;
      案例 '你'：x。dit（）; X。dit（）; X。dah（）; 打破 ;
      案例 ' v '：x。dit（）; X。dit（）; X。dit（）; X。dah（）; 打破 ;
      案例 ' w '：x。dit（）; X。dah（）; X。dah（）; 打破 ;
      情况下， ' X '：X。dah（）; X。dit（）; X。dit（）; X。dah（）; 打破 ;
      情况下 ' ÿ '：X。dah（）; X。dit（）; X。dah（）; X。dah（）; 打破 ;
      情况下 ' ž '：X。dah（）; X。dah（）; X。dit（）; X。dit（）; 打破 ;
      情况下 ' 0 '：X。dah（）; X。dah（）; X。dah（）; X。dah（）; X。dah（）; 打破 ;
      案例 ' 1 '：x。dit（）; X。dah（）; X。dah（）; X。dah（）; X。dah（）; 打破 ;
      案例 ' 2 '：x。dit（）; X。dit（）; X。dah（）; X。dah（）; X。dah（）; 打破 ;
      案例 ' 3 '：x。dit（）; X。dit（）; X。dit（）; X。dah（）; X。dah（）; 打破 ;
      案例 ' 4 '：x。dit（）; X。dit（）; X。dit（）; X。dit（）; X。dah（）; 打破 ;
      案例 ' 5 '：x。dit（）; X。dit（）; X。dit（）; X。dit（）; X。dit（）; 打破 ;
      案例 ' 6 '：x。dah（）; X。dit（）; X。dit（）; X。dit（）; X。dit（）; 打破 ;
      案例 ' 7 '：x。dah（）; X。dah（）; X。dit（）; X。dit（）; X。dit（）; 打破 ;
      案例 ' 8 '：x。dah（）; X。dah（）; X。dah（）; X。dit（）; X。dit（）; 打破 ;
      案例 ' 9 '：x。dah（）; X。dah（）; X。dah（）; X。dah（）; X。dit（）; 打破 ;
      case  '，'：x。dah（）; X。dah（）; X。dit（）; X。dit（）; X。dah（）; X。dah（）; 打破 ;
      案件 '。'：x。dit（）; X。dah（）; X。dit（）; X。dah（）; X。dit（）; X。dah（）; 打破 ;
      案件 '？'：x。dit（）; X。dit（）; X。dah（）; X。dah（）; X。dit（）; X。dit（）; 打破 ;
      案例 '！'：x。dit（）; X。dit（）; X。dah（）; X。dah（）; X。dit（）; 打破 ;
      case  ' \“ '：x。dit（）; x。dah（）; x .dit（）; x .dit（）; x。dah（）; x .dit（）; break ;
      案例 ' \' '：x。dit（）; X。dah（）; X。dah（）; X。dah（）; X。dah（）; X。dit（）; 打破 ;
      案例 ' - '：x。dah（）; X。dit（）; X。dit（）; x。dit（）; X。dit（）; X。dah（）; 打破 ;
    }
  }
}
