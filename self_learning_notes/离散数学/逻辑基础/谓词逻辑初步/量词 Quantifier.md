优先级 量词的优先级最高 
全称量词 $\forall$
存在量词 $\exists$

谓词的变元与量词绑定 构造出一个命题

$\forall x \forall y \equiv \forall y \forall x$
对$\exists$同理，量词相同，仅命题变元不同时，顺序不重要
量词不同时顺序是有影响的

唯一存在 ：
$\exists x ( P(x) \land \forall y P(y) \rightarrow y = x)$

在n与2n之间存在素数
$\leftrightarrow$
P(x) : n < x < 2n $\land (x > 1)$
S(y) : 2 <= y <= √x 
K(y)：y 是整数
Z(y)：x%y != 0
$\forall n,\exists x ,P(x) \rightarrow (\forall y , S(y) \land K(y) \rightarrow Z(y))$

不存在最大的素数
$\leftrightarrow$
