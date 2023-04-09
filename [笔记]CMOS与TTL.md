如果只看一个芯片的外观，是无法区分TTL和CMOS的。因为它们是按照芯片的制作工艺来分类的。
CMOS内部集成的是MOS管，而TTL内部集成的是三极管。
# MOS管工作原理
## P型半导体（空穴）
P型半导体是在纯净的硅晶体中掺杂了三价硼，此时硼原子最外层缺少了一个电子，我们用空穴代替这个缺少的电子。空穴吸引电子，对外显正电。我们称之为P型半导体。
P取自Positive的首字母，正的、积极的。
需要注意的是，P型半导体里面并不全是空穴，它里面也有自由电子的存在，但没有N型半导体里面那么多。
## N型半导体（电子）
N型半导体是在纯净的硅晶体中掺杂了五价磷，此时磷原子多了一个自由电子，自由电子带负电，我们称之为N型半导体。
N取自Negative的首字母，负的、消极的。
如果我们给N型半导体通电，他是可以导通的，因为它内部有多余的自由电子，无论正接还是反接都可以导通。
## 漂移运动
上面叙述的两种半导体在外加电场的情况下，会作定向运动。这种运动称为电子与空穴（统称“载流子”）的“漂移运动”，并产生“漂移电流”。
根据静电学，**电子将作与外加电场相反方向的运动，并产生电流**（根据传统定义，**电流的方向与电子运动方向相反，即和外加电场方向相同**）；而**空穴的运动方向与外加电场相同，由于其可被看作是“正电荷”，将产生与电场方向相同的电流**。
两种载流子的浓度越大，所产生的漂移电流越大。
## 扩散运动
由于某些外部条件而使半导体内部的载流子存在浓度梯度的时候，将产生扩散运动，即载流子由浓度高的位置向浓度低的位置运动。
## pn结的形成
p型、n型半导体由于分别含有较高浓度的“空穴”和自由电子，存在浓度梯度，所以二者之间将产生扩散运动。即：

- 自由电子由n型半导体向p型半导体的方向扩散
- 空穴由p型半导体向n型半导体的方向扩散

载流子经过扩散的过程后，扩散的自由电子和空穴相互结合，使得原有的N型半导体的自由电子浓度减少，同时原有P型半导体的空穴浓度也减少。在两种半导体中间位置形成一个由N型半导体指向P型半导体的电场，称为“内电场”。
### 平衡状态（零偏置）
pn结在没有外加电压情况下，跨结形成了电势差导致了平衡状态。该电势差称为内建电势（`built-in potential`）。
pn结的n区的电子向p区扩散，留下了正电荷在n区。类似地，p型空穴从p区向n区扩散，留下了负电荷在p区。进入了p区的电子与空穴复合，进入了n区的空穴与电子复合。其效果是扩散到对方的多数载流子（自由电子与空穴）都耗尽了，结区只剩下不可移动的带电离子，失去了电中性变为带电，形成了耗尽层（`space charge region`）。
> 图A：零偏置热平衡下的pn结。电子与空穴的浓度分别用蓝线、红线表示。灰色区域是电中性。亮红色是正电区域，亮蓝色区域是负电性。底部显示电场。静电力作用于电子与空穴，以及其扩散取向。

![Pn-junction-equilibrium.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680948994133-be20e232-bee1-46c7-a48f-7d3811629c2e.png#averageHue=%23fbfbde&clientId=u450eaee0-6d1b-4&from=paste&height=384&id=ufd7bcaca&name=Pn-junction-equilibrium.png&originHeight=767&originWidth=1233&originalType=binary&ratio=2&rotation=0&showTitle=false&size=100865&status=done&style=none&taskId=u8d031dd0-a096-4df4-8891-8a7346784ba&title=&width=616.5)
耗尽区的电场与电子与空穴的扩散过程相反，阻碍进一步扩散。载流子浓度确定的平衡态在图A中表示为红线与蓝线。
> 图B：pn结在零偏置与热平衡状态下。底部绘出了电荷密度、电场、电压。

![Pn-junction-equilibrium-graphs.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680949102536-6a6d0d66-096d-4492-ad21-b09c865fcfde.png#averageHue=%23fcfcde&clientId=u450eaee0-6d1b-4&from=paste&height=642&id=u22495bfc&name=Pn-junction-equilibrium-graphs.png&originHeight=1283&originWidth=1233&originalType=binary&ratio=2&rotation=0&showTitle=false&size=118626&status=done&style=none&taskId=u9b0cf3aa-b46f-4a97-976c-28c90302efb&title=&width=616.5)
耗尽层的多数载流子已经全部耗尽，留下的电荷密度等于净掺杂水平。当平衡达到时，电荷密度近似显示为阶梯函数，耗尽层与中立区的边界相当陡峭。（见图B的Q(x)图）。耗尽层在pn结两侧有相同量的电荷，因此它向较少掺杂的一侧延展更远（图A与图B的n端）。
### 正向偏置
若施加在p区的电压高于n区的电压，称为正向偏置（forward bias）。
在正向偏置电压的外电场作用下，**N区的电子与P区的空穴被推向pn结。这降低了耗尽区的耗尽宽度。这降低了pn结的电势差（即内在电场）**。随着正向电压的增加，耗尽区最终变得足够薄以至于内电场不足以反作用抑制多数载流子跨pn结的扩散运动，因而降低了pn结的电阻。跨过pn结注入p区的电子将扩散到附近的电中性区。所以pn结附近的电中性区的少数载流子的扩散量确定了二极管的正向电流。
### 反向偏置
若施加在n区的电压高于p区的电压，这种状态称为pn结反向偏置（reverse bias）。
在半导体中，电子和空穴作为载流子。数目较多的载流子称为多数载流子；在N型半导体中多数载流子是电子，而在P型半导体中多数载流子是空穴。数目较少的载流子称为少数载流子；在N型半导体中少数载流子是空穴，而在P型半导体中少数载流子是电子。
由于**p区连接电源负极，多数载流子(空穴)被外电场拉向负极，因而耗尽层变厚**。n区也发生类似变化。并且随反向偏置电压的增加，耗尽层的厚度增加。从而，多数载流子扩散过pn结的势垒增大，pn结的电阻变大，宏观看二极管成为绝缘体。
反向偏置时形成极其微弱的漂移电流，电流由N区流向P区，并且这个电流不随反向电压的增大而变化，称为“反向饱和电流”（reverse saturation current）。这是因为**反向电流是由少数载流子跨pn结形成的，因此其“饱和”值取决于少数载流子的掺杂密度**。由于**反向饱和电流很小，pn结处于截止状态，所以外加反向电压时，pn结相当于断路**。
### 反向崩溃
当反向电压逐渐增大时，反向饱和电流不变。
但是当反向电压达到一定值时，pn结将被击穿。
在pn结中加反向电压，如果反向电压过大，位于pn结中的载流子会拥有很大的动能，足以和中性粒子碰撞使中性粒子分离出价电子而产生空穴-电子对。这样会导致pn结反向电流的急剧增大，发生pn接面的击穿，因为被弹出的价电子又可能和其他中性粒子碰撞产生链式反应，类似于雪崩，这样的反向击穿方式成为雪崩击穿（Avalanche breakdown）。**掺杂浓度越低所需电场越强**。当掺杂浓度非常高时，在pn结两端加入弱电场就会使中性粒子中的价电子脱离原子的束缚，从而成为载流子。导致pn结的击穿。这样的击穿被称作齐纳击穿（Zener breakdown）。掺杂浓度越高所需要的电场越弱。**一般小于6V的电压引起的是齐纳击穿，大于6V的引起的是雪崩击穿**。
### 伏安特性
pn结的最大特性为单向导电性，反映到伏安特性曲线如右图。当正向电压达到一定值时，pn结将产生正向偏置，pn结被导通（图中蓝色部分）；当反向电压在一定范围内时，pn结产生微弱的反向饱和电流（图中绿色部分）；当反向电压超过一定值时，pn结被击穿（图中黄色部分）。
![P-n_junction_characteristics-svg.svg](https://cdn.nlark.com/yuque/0/2023/svg/34281420/1680951311256-908e6c30-3c69-4b93-8942-16aefcffea38.svg#clientId=u450eaee0-6d1b-4&from=paste&id=u5e818cba&name=P-n_junction_characteristics-svg.svg&originHeight=400&originWidth=400&originalType=binary&ratio=2&rotation=0&showTitle=false&size=1348&status=done&style=none&taskId=uc75a8f90-03b0-4478-8a79-35a83513167&title=)
## 三极管
NPN型双极性晶体管可以视为共用阳极的两个二极管接合在一起。在双极性晶体管的正常工作状态下，发射结（基极与发射极之间的PN结）处于正向偏置状态，而集电结（基极与集电极之间的PN结）则处于反向偏置状态。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680968789050-c61ad1e7-fc66-4168-b6cc-d8ec74c4287d.png#averageHue=%230a0a0a&clientId=u1eb4f93f-7332-4&from=paste&id=UmTXp&name=image.png&originHeight=1364&originWidth=2880&originalType=url&ratio=2&rotation=0&showTitle=false&size=186362&status=done&style=none&taskId=u89bceeed-75b4-4bd0-bb9a-c963b83f13c&title=)
图中左边的蓝色区域为发射极，中间绿色区域为基极，右边蓝色区域为集电极。
灰色的箭头为电子的流动方向示意，发射极注入的大部分电子移动到了集电极，少部分在基极与空穴复合。白色箭头为基极的多数载流子空穴的流动方向示意。NPN型双极性晶体管处于正向放大区的条件是：在发射结上具有正向偏置，而集电结具有反向偏置。
可以把三极管转化成这样一个模型以便理解：
BE之间是一个二极管和一个电流表，CE之间是一个可调电阻和一个电流表，中间还有一个小人，小人时刻看着电流表1的读数，然后通过调节可调电阻的大小，保证电流表2的读数=电流表1的读数x放大倍率。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680970391933-64c265ab-01d4-4ee2-8439-e46a26a10679.png#averageHue=%23eaeaea&clientId=u1eb4f93f-7332-4&from=paste&height=673&id=Fn094&name=image.png&originHeight=1345&originWidth=2221&originalType=binary&ratio=2&rotation=0&showTitle=false&size=460335&status=done&style=none&taskId=u98a58818-163e-4a28-973d-72cf1113dd6&title=&width=1110.5)
## MOS管
将两个N型半导体引出两个金属电极，分别作为mos管的漏极和源极，我们给他接上电，此时mos管是截止的。
因为他们之间形成了两个二极管，而且方向相反。此时mos管截止。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680958082564-96a782e1-8245-41ff-9736-da0e8b033d28.png#averageHue=%23746f60&clientId=ud197b260-27a8-4&from=paste&height=450&id=ubf475c7d&name=image.png&originHeight=899&originWidth=1753&originalType=binary&ratio=2&rotation=0&showTitle=false&size=541701&status=done&style=none&taskId=ub35be41c-31df-4114-9a23-2b133ee7ca1&title=&width=876.5)
为了能让他导通，在P区加了很薄的二氧化硅绝缘层，然后又在绝缘层上面制作了一层金属板，形成了栅极。当我们给栅极也接上电，这时候金属板上就有了电场。就可以把P区里面的电子吸引到绝缘层附近，而把空穴赶走。电压越大，吸引过来的电子也越多。
当自由电子吸引的足够多时，就形成了N沟道，N沟道就是N型半导体之间的沟道。此时N沟道取代了原来P型半导体之间的空穴，使得原来半导体之间的PN结不复存在。
> 为了便于理解，我们可以把这个区域看作一整块N型半导体。

![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680959061728-b78d28e1-7d0f-4188-9e08-0746ad289f38.png#averageHue=%236a675b&clientId=ud197b260-27a8-4&from=paste&height=475&id=uc363c59a&name=image.png&originHeight=949&originWidth=2045&originalType=binary&ratio=2&rotation=0&showTitle=false&size=575838&status=done&style=none&taskId=u72b28084-1545-415a-8540-c89bc37eb4b&title=&width=1022.5)
所以在栅极施加电压之后，它就导通了。当我们把栅极电压去掉，N沟道就消失了，此时mos管必然会截止。
> mos管的两个特性：

- 栅极阻抗非常高
   - 因为有绝缘层的存在，它几乎完全关闭了电子的通道，造成他的输入电阻可达上亿欧姆，所以它的输入几乎不取电流。这也是现在芯片内部集成的都是mos管的原因之一。
- mos的栅极容易被静电击穿
   - 由于栅极阻抗非常大，感应电荷很难释放。产生的高压很容易就把这一层薄薄的绝缘层给击穿，造成mos管永久损坏。
### NMOS
将NMOS的G极连接单片机的一个IO口，当单片机输出高电平时，等效于开关闭合。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1681012162388-c42ac33c-ef52-4780-9543-1c74026096b2.png#averageHue=%23f8faf2&clientId=uc79a0fec-ead0-4&from=paste&height=829&id=ubd2d4afe&name=image.png&originHeight=1657&originWidth=2822&originalType=binary&ratio=2&rotation=0&showTitle=false&size=864636&status=done&style=none&taskId=u4f07fbd8-a27c-4e27-a151-94687c539a2&title=&width=1411)
> NMOS等效模型

NMOS可以看成一个由电压控制的电阻
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1681012289590-7d657eda-0b65-416b-872d-65084174355e.png#averageHue=%23fafcfa&clientId=uc79a0fec-ead0-4&from=paste&height=495&id=u28ea38e8&name=image.png&originHeight=989&originWidth=2463&originalType=binary&ratio=2&rotation=0&showTitle=false&size=426513&status=done&style=none&taskId=u4283f327-6993-4497-b6d0-e8f5f5a6729&title=&width=1231.5)
电压-电阻关系：
![](https://cdn.nlark.com/yuque/0/2023/jpeg/34281420/1681012875918-9d40731b-53b1-4e01-9386-b3483b7318f3.jpeg)
### PMOS
> PMOS的等效模型

![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1681016880886-0f78c039-c91a-431a-8e69-75272650f4f8.png#averageHue=%23e3e3e1&clientId=uc79a0fec-ead0-4&from=paste&height=851&id=ufdb7ae04&name=image.png&originHeight=1702&originWidth=3200&originalType=binary&ratio=2&rotation=0&showTitle=false&size=577720&status=done&style=none&taskId=u6a97802d-3852-4a9e-8a97-f564565f9fa&title=&width=1600)
PMOS的Vgsth是一个负值，Vsource要大于Vgata的时候，PMOS才能被打开，这与NMOS是正好相反的
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1681017004587-d836c607-9e6d-443d-9a9f-c8273a08e209.png#averageHue=%23bbbebc&clientId=uc79a0fec-ead0-4&from=paste&height=871&id=u6986ab07&name=image.png&originHeight=1741&originWidth=2648&originalType=binary&ratio=2&rotation=0&showTitle=false&size=726116&status=done&style=none&taskId=ud677e78d-0f70-474c-86e5-358bcf9d0ab&title=&width=1324)
PMOS与NMOS相反。
NMOS中G极高电平导通，PMOS中G极低电平导通。
NMOS放到灯泡下面，PMOS放到灯泡上面（高电平的一端）。
NMOS中D极在上，S在下，PMOS中S极在上，D极在下。
对于灯泡、电机这种无源功率器件，我们可以利用NMOS作为下管控制，对于芯片这种有源器件，一般利用PMOS作为上管控制更加合适。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1681015786101-bb352222-570c-4bcb-ab5b-94b7fc8927f4.png#averageHue=%23e5e9e2&clientId=uc79a0fec-ead0-4&from=paste&height=886&id=aXfJu&name=image.png&originHeight=1772&originWidth=3196&originalType=binary&ratio=2&rotation=0&showTitle=false&size=1061366&status=done&style=none&taskId=u52fa5b60-c200-4995-ad38-44c100563fe&title=&width=1598)
> 如果NMOS接在上面

那么当NMOS打开的时候，DS之间的电阻就接近于0，那么S的电压就是5V。此时如果还要维持NMOS的打开状态，Gata的电压必须要大于Vsource+Vgsth，差不多就是10V左右，而系统里最高的电压就是5V，显然无法继续维持NMOS的打开状态。那么此时NMOS就是陷入一个不确定的状态。这就是为什么NMOS不能放在上面的原因。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1681015977539-2585fb76-0397-4fde-8d7b-a9475a1f9f1c.png#averageHue=%23f3f2d6&clientId=uc79a0fec-ead0-4&from=paste&height=880&id=u737bcce1&name=image.png&originHeight=1759&originWidth=2087&originalType=binary&ratio=2&rotation=0&showTitle=false&size=712304&status=done&style=none&taskId=u86bc6004-440b-4678-b46b-ed2ddfdc475&title=&width=1043.5)
> 对于灯泡来说，放在上面和放在下面有没有区别

对于灯泡来说，放到上面和放到下面确实没有什么本质的区别。
但是如果把灯泡换成芯片，那就有区别了。
如果MOS管在下面，我们可以看到这个芯片的负极，也就是GND它没有直接接地。GND和地之间隔了一个MOS管，这样在NMOS打开的时候，这个芯片就没办法跟其他的芯片良好地共地，可能会有一个通信混乱的问题。同时在NMOS关闭的时候，又因为芯片的VCC一直连着电源，电流就有可能直接通过io口流出去。这样可能让芯片进入一个未知的状态。所以使用芯片的话，使用PMOS作为上管，把芯片放在下面就比较合适了，这样子既可以使芯片的GND良好地接地，就可以完全掐断VCC的电源
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1681016607699-8165bba2-1adf-4d01-ad2d-08dc51362f14.png#averageHue=%23e2e1df&clientId=uc79a0fec-ead0-4&from=paste&height=873&id=u8bd25ad1&name=image.png&originHeight=1746&originWidth=2664&originalType=binary&ratio=2&rotation=0&showTitle=false&size=790142&status=done&style=none&taskId=u50cc3236-ef3a-41ff-98b3-eff80ca43c5&title=&width=1332)
> 能不能利用PMOS作为上管来控制灯泡？

因为刚才有说到，对于灯泡来说，放到上面和放到下面确实没有什么本质的区别。
因为工艺的问题：

| Rdson | NMOS<PMOS |
| --- | --- |
| 价格 | NMOS<PMOS |
| 品种 | NMOS>PMOS |

出于成本和易用性的考虑，能用NMOS还是尽量用NMOS
## 三极管与MOS管区别
MOS管是电压控制的元件，而三极管是电流控制的元件。

| 三极管 | NMOS管 |
| --- | --- |
| ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680970969241-db4782c7-2123-4b92-9b60-dc67f621eba8.png#averageHue=%23000000&clientId=u1eb4f93f-7332-4&from=paste&height=1920&id=Veg1g&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=162588&status=done&style=none&taskId=ueb7cd4df-e731-45f6-acb8-3d18fd4a0c2&title=&width=1920) | ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680952117051-8d5e5cb4-7ca2-4185-9dfa-d5a5e8b3a6ba.png#averageHue=%23000000&clientId=u450eaee0-6d1b-4&from=paste&id=m0ygQ&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=124510&status=done&style=none&taskId=u105631cf-6bb9-43a7-912b-fe35409cc4e&title=) |

三极管的BE之间可以理解为存在一个二极管，这也就产生了一个电流的通路。当给三极管施加高电平时，BE之间就会产生持续的电流，只有存在这个持续的电流时，三极管才会被打开。当把这个高电平拿走，电流就瞬间消失了，三极管也会被关闭。维持三极管打开的必要条件就是BE之间存在持续的电流。所以三极管被称为电流控制元件。
对于MOS管来说，G跟S之间是不存在通路的，它们之间仅仅存在一个寄生电容，当给Gata施加高电平时，除了一开始给这个寄生电容充电的电流之外，并不存在其他的电流。只要维持GS的电压差，MOS管就可以打开。甚至因为这个寄生电容的存在，即便撤走了IO的高电平，你会发现灯泡依旧是亮的，直到这个电容上的电荷慢慢放光，MOS管才会关闭。
到这里，应该能发现MOS管的优势：省电。保持MOS管的打开状态并不需要额外的电流，而三极管需要。
MOS管的第二个优势是导通阻抗小（还是省电）。MOS管导通之后，DS之间可以等效为一个电阻，而且这个电阻可以很轻松地做到小于10mΩ。此时即便通过10A的电流，也就只会产生0.1V的压降以及1W的功耗。二三极管导通之后，CE之间就等效为一个二极管，就会产生一个固定的0.4V左右的压降，此时如果通过的电流还是10A。那么三极管的功耗就达到了4W。所以现在大部分的低压功率器件都使用了MOS管做控制。
# TTL
> 晶体管－晶体管逻辑（英语：`Transistor-Transistor Logic`，缩写为TTL）

最开始的是RTL
`Resistor–transistor logic`：电阻三极管逻辑。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680960279020-74ea1c8c-318a-44cf-bc37-f505d97e07ee.png#averageHue=%23f2f2f2&clientId=ud197b260-27a8-4&from=paste&height=840&id=u0b17b294&name=image.png&originHeight=1679&originWidth=3093&originalType=binary&ratio=2&rotation=0&showTitle=false&size=454340&status=done&style=none&taskId=ud9c21365-9849-4cd8-8b82-7e210ee2624&title=&width=1546.5)
RTL速度慢且不稳定，又过了几年，德州仪器的TTL逻辑电路后来居上。
它的核心是由三极管和三极管组成。它的作用与上面说的RTL一样，但更加稳定，频率也更高。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680960472015-7b87308d-8be7-4713-beff-b387303a788b.png#averageHue=%23f5f5f5&clientId=ud197b260-27a8-4&from=paste&height=682&id=ue7720f51&name=image.png&originHeight=1363&originWidth=2777&originalType=binary&ratio=2&rotation=0&showTitle=false&size=300597&status=done&style=none&taskId=udfeaa81f-c19c-4e4e-8a1e-b340ce41714&title=&width=1388.5)
> 图中，当T4截止，T5导通时，Y输出为低电平，T5的CE极之间的饱和压降大约为0.3V。

![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680961764233-6f3d152a-f062-422e-a426-f5edf2c5edf4.png#averageHue=%23f8f7f7&clientId=ud197b260-27a8-4&from=paste&height=657&id=u9029c3ed&name=image.png&originHeight=1313&originWidth=1911&originalType=binary&ratio=2&rotation=0&showTitle=false&size=374832&status=done&style=none&taskId=u5c0edd06-85db-40b7-be78-d0d14e80fc8&title=&width=955.5)
> 当T5截止，T4导通时，输出电压大约为3.6V。

![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680961867511-462fd7ce-eff4-4cf6-a7d5-5b480a9dffb7.png#averageHue=%23f8f7f7&clientId=ud197b260-27a8-4&from=paste&height=641&id=u459334c3&name=image.png&originHeight=1281&originWidth=2033&originalType=binary&ratio=2&rotation=0&showTitle=false&size=377704&status=done&style=none&taskId=u002dcb07-5ed8-4a23-baed-fd1f255aa99&title=&width=1016.5)
## 输入输出特性
输入电压准位：

- Hi输入电压：2.0V以上
- Low输入电压：0.8V以下

输出电压准位：

- Hi输出电压：2.4V以上
- Low输出电压：0.4V以下

由以上规范可以算出：前一级输出至次一级输入电压准位间，可以容忍的噪声边际电压是0.4V。
由于TTL电路种类很多，就要取输出高电平最小的一种（2.4V）。就像木桶效应一样。
> 为什么TTL的输入高电平要大于2.0V呢？

当两个输入同时大于等于2.0V时，这三个晶体管可以完全导通，能输出期望的低电平。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680962081661-4315c4d3-e754-45db-9aa7-5de556b5bef5.png#averageHue=%23f8f4f4&clientId=ud197b260-27a8-4&from=paste&height=645&id=u4059789a&name=image.png&originHeight=1289&originWidth=1919&originalType=binary&ratio=2&rotation=0&showTitle=false&size=440266&status=done&style=none&taskId=u73189a8b-6867-44df-9051-7d0b3428cc3&title=&width=959.5)
如果有一个输入小于0.8V，E点电压就会被拉低，此时T5截止，T4导通，输出3.6V的高电平。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680962184269-230bce6c-3e13-447b-b0b7-e9c2b46168e1.png#averageHue=%23f9eeed&clientId=ud197b260-27a8-4&from=paste&height=648&id=u4966d1d4&name=image.png&originHeight=1295&originWidth=2153&originalType=binary&ratio=2&rotation=0&showTitle=false&size=414523&status=done&style=none&taskId=u6f16f573-3d57-415d-891f-a78d8f74d51&title=&width=1076.5)
在稳定状态下，T4和T5只能有一个导通。
图中的两个二极管起到了钳位的作用，它既可以抑制输入端出现的负极性脉冲，又能限制电流，起到保护作用。
TTL电路的优点是速度快，但有一个缺点是它无法大规模集成，那就是三极管的静态电流损耗非常大。
## 小电流撬动大电流
如果要用单片机控制LED灯的开关。
一般小功率LED灯流过的电流差不多5mA，所以单片机引脚就可以直接点亮LED灯。
如果要用单片机控制大功率LED灯。
比如这个LED灯的工作电流是100mA，正向压降为2V，这时候单片机肯定是不能直接点亮LED灯的。因为单片机所有引脚可流过的电流也就20mA。所以它肯定不能直接驱动100mA的LED灯。
如果要驱动这个大功率LED灯，就需要用到三极管。
它有小电流撬动大电流的本领。比如给它输入一个很小的电流，就能输出很大的电流，这样单片机就可以用小电流去控制这个LED灯了。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680965487438-dd4d03eb-c793-4739-9548-7a0178f0428a.png#averageHue=%23f0f0f0&clientId=ud197b260-27a8-4&from=paste&height=695&id=uae840e2b&name=image.png&originHeight=1389&originWidth=1531&originalType=binary&ratio=2&rotation=0&showTitle=false&size=192934&status=done&style=none&taskId=u4ad4326c-2fb6-4073-8a57-175dde7882f&title=&width=765.5)
还有一个问题，就是这两个电阻的阻值该选多大的呢。
设上方的电阻为R2，要想知道它的阻值，就要知道流过它的电流和加在它身上的电压。因为R2和LED灯是串联关系，所以流过R2的电流也是100mA。电压是用12V减去LED灯和CE极的压降，就是电阻R2身上的电压。LED灯的正向压降是2V，但是三极管CE极的压降是多少呢？这个很容易得到，因为这个三极管现在在充当开关的作用，所以它处于饱和状态。这样我们就能在这个型号的三极管数据手册中查到它的CE极压降。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680965852927-6ef29154-c202-446a-80b2-f66fd32564a8.png#averageHue=%23ebebeb&clientId=ud197b260-27a8-4&from=paste&height=751&id=u6d3f3c5a&name=image.png&originHeight=1501&originWidth=2187&originalType=binary&ratio=2&rotation=0&showTitle=false&size=732305&status=done&style=none&taskId=ucf1682f9-acba-494a-8e5e-891d890c9b6&title=&width=1093.5)
由这个曲线可以看出，当流过100mA电流时，CE极饱和压降差不多接近0.2V，所以R2身上的压降是9.8V。
所以R2的阻值为98Ω。
然后就是R1的阻值，方法也是一样的，它身上的电压是用5V减去三极管BE极压降，这个压降一般取0.7V，所以R1身上的电压是4.3V。
那它身上的电流怎么算呢，这时候可以用C极电流反向推导。因为C极电流是100mA，我们只需要知道此时三极管的增益，就能反向求出B极电流，这个增益也可以从数据手册上查到。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680966187487-f5e2fc0b-2ea8-4765-ade2-155bd036ee1c.png#averageHue=%23f9f9f9&clientId=ud197b260-27a8-4&from=paste&height=484&id=u16ee5d74&name=image.png&originHeight=967&originWidth=3200&originalType=binary&ratio=2&rotation=0&showTitle=false&size=341109&status=done&style=none&taskId=u4c27e738-cd1b-4c3d-ab5d-29c30cf5f99&title=&width=1600)
在C极电流为100mA时，它的增益为30，由此可以求出流过B极的电流为3.3mA（100/30），所以R1的阻值应该为1300Ω。
这样当我们单片机只需要输出3.3mA的电流，就能控制LED灯输出100mA的电流。
## 多发射极三极管
本质是一个与门。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1681024964046-f79cad7f-246f-486a-b3d1-084163bbf4a3.png#averageHue=%23d0cfcf&clientId=u10de73af-e96a-4&from=paste&height=800&id=uf78820e2&name=image.png&originHeight=1599&originWidth=2565&originalType=binary&ratio=2&rotation=0&showTitle=false&size=2036984&status=done&style=none&taskId=uc31283af-3bb9-4681-9f60-727213e9c4f&title=&width=1282.5)
右侧集电极C始终为高电平1，基极B也始终为高电平1，当左侧集电极有一个为低电平0零时，就可以导通，会产生很小的压差。Vo等效于低电平。
下图中AB与Y是“与”的关系，Y与T'是“非”的关系。Y上加横线读作Y bar，bar就是横线的意思。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1681025375909-577692a6-55e8-4671-a6c6-42d35139eb77.png#averageHue=%23d7d6d6&clientId=u10de73af-e96a-4&from=paste&height=811&id=ua301549b&name=image.png&originHeight=1622&originWidth=3198&originalType=binary&ratio=2&rotation=0&showTitle=false&size=2895820&status=done&style=none&taskId=ua28f3074-9929-41c8-aa64-63b4ece7ae3&title=&width=1599)

# CMOS
> 互补式金属氧化物半导体（英语：`Complementary Metal-Oxide-Semiconductor`，缩写作 CMOS；简称互补式金氧半导体）

![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680968709976-a91eac79-b5d2-4d2c-88e3-a0cf69e39fa0.png#averageHue=%23f6a034&clientId=u1eb4f93f-7332-4&from=paste&id=u7caf4593&name=image.png&originHeight=1555&originWidth=2880&originalType=url&ratio=2&rotation=0&showTitle=false&size=411532&status=done&style=none&taskId=u75f644f0-135b-4e15-95a8-3c5b6916ab4&title=)
TTL静态电流损耗太大，鉴于此，发明了速度相对较慢，但静态电流为0的CMOS逻辑电路。
`Complementary Metal-Oxide-Semiconductor`，缩写作 CMOS；简称互补式金氧半导体。
互补是因为N型MOS和P型MOS同时出现在了电路中。
常用于金氧半场效应管的电路符号有多种形式，最常见的设计是以**一条垂直线代表沟道（Channel）**，**两条和沟道平行的接线代表源极（Source）与漏极（Drain）**，**左方和沟道垂直的接线代表栅极（Gate）**，如下图所示。有时也会将代表沟道的直线以虚线代替，以区分增强型（enhancement mode，又称增强式）金氧半场效应管或是耗尽型（depletion mode，又称耗尽式）金氧半场效应管。
由于集成电路芯片上的金氧半场效应管为四端器件，所以除了源极（S）、漏极（D）、栅极（G）外，尚有一基极（Bulk或是Body）。金氧半场效应管电路符号中，从沟道往右延伸的箭号方向则可表示此器件为n型或是p型的金氧半场效应管。**箭头方向永远从P端指向N端**，所以**箭头从沟道指向基极端的为p型的金氧半场效应管**，或简称PMOS（代表此器件的沟道为p型）；反之则代表基极为p型，而沟道为n型，此器件为n型的金氧半场效应管，简称NMOS。在一般分布式金氧半场效应管器件中，**通常把基极和源极接在一起，故分布式金氧半场效应管通常为三端器件**。而在集成电路中的金氧半场效应管通常因为使用同一个基极（common bulk），所以不标示出基极的极性，而在PMOS的栅极端多加一个圆圈以示区别。

| PMOS | ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680952085299-e8ada24b-8e45-4512-a4ab-551985be02bf.png#averageHue=%23000000&clientId=u450eaee0-6d1b-4&from=paste&id=u3cf31486&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=124524&status=done&style=none&taskId=u32d1bf0b-6bf4-418c-9900-365a1798434&title=) | ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680952105480-7bfa7361-486a-4d9e-b3ca-456c7e89c3fb.png#averageHue=%23000000&clientId=u450eaee0-6d1b-4&from=paste&id=ub708c6cd&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=124396&status=done&style=none&taskId=u19b504a7-dfef-4731-a04b-9c53bdaef89&title=) | ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680952129977-aee3f69d-0bce-4a62-b539-4f7898fb748a.png#averageHue=%23000000&clientId=u450eaee0-6d1b-4&from=paste&id=u34bd0699&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=124803&status=done&style=none&taskId=uab252d3d-9a97-421c-800c-e3ebdeabb0c&title=) | ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680952156709-7c35ce08-1000-4569-a3cd-36b12e96cc8e.png#averageHue=%23000000&clientId=u450eaee0-6d1b-4&from=paste&id=ue82a2233&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=95452&status=done&style=none&taskId=u832935b7-6a86-4af5-a109-53ad0cfeadd&title=) | ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680952178951-b3cccc41-6e70-47a0-aad2-be406a086e07.png#averageHue=%23000000&clientId=u450eaee0-6d1b-4&from=paste&id=u5cbeb8f5&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=124606&status=done&style=none&taskId=uff65f25f-9e67-46e5-ad54-30bcd87f223&title=) |
| --- | --- | --- | --- | --- | --- |
| NMOS | ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680952094526-60e613e3-81cd-42a3-9427-8cd552d084b8.png#averageHue=%23000000&clientId=u450eaee0-6d1b-4&from=paste&id=u0f596c7f&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=124800&status=done&style=none&taskId=ucd4c4005-7cb2-4ca6-9498-0df926eed19&title=) | ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680952117051-8d5e5cb4-7ca2-4185-9dfa-d5a5e8b3a6ba.png#averageHue=%23000000&clientId=u450eaee0-6d1b-4&from=paste&id=ua624d461&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=124510&status=done&style=none&taskId=u105631cf-6bb9-43a7-912b-fe35409cc4e&title=) | ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680952141823-96695acd-70f3-4088-adc9-734033fe9240.png#averageHue=%23000000&clientId=u450eaee0-6d1b-4&from=paste&id=u0a28870b&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=121613&status=done&style=none&taskId=u9af23aec-15b0-4dd6-90e7-336b98058bb&title=) | ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680952166391-d1f49ae9-0fe6-4ff2-94d8-cbe4c8f1525e.png#averageHue=%23000000&clientId=u450eaee0-6d1b-4&from=paste&id=uea4a346e&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=95184&status=done&style=none&taskId=ue3a0e8f0-ec4b-43f3-8e2d-5e9d97bfba4&title=) | ![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680952188887-6a583696-24c8-4a7b-9e07-8f002b9c66f4.png#averageHue=%23000000&clientId=u450eaee0-6d1b-4&from=paste&id=u4c345582&name=image.png&originHeight=1920&originWidth=1920&originalType=url&ratio=2&rotation=0&showTitle=false&size=125011&status=done&style=none&taskId=u825f4787-fccd-455e-887b-9a419f515e5&title=) |
|  | JFET | 增强型MOSFET | 增强型MOSFET（省略基极） |  | 耗尽型MOSFET |

## 输入输出特性
(VCC=5V)
输入：

- 高：>=3.5V
- 低：<=1.5V

输出：

- 高：>=4.45V
- 低：<=0.5V
## 满幅输出
> 这是一个CMOS与非门，它的作用与上面的TTL与非门完全相同。

![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680962532181-91abb730-7422-4430-911e-d560cc9aa640.png#averageHue=%23f8f8f8&clientId=ud197b260-27a8-4&from=paste&height=604&id=u75c714ea&name=image.png&originHeight=1207&originWidth=2773&originalType=binary&ratio=2&rotation=0&showTitle=false&size=242750&status=done&style=none&taskId=u1d851efa-bd12-4d01-b9fa-044b50cfe0f&title=&width=1386.5)
CMOS与非门中的半导体器件都是MOS管，MOS管的静态功耗接近于0，所以它可以在芯片里面大规模集成。
当输入同时为高电平时，MOS管的导通情况是这样的：此时输出的电平接近0V。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680962670795-0d2c157f-8dfa-457b-ace0-fe951cedd8d7.png#averageHue=%23faecea&clientId=ud197b260-27a8-4&from=paste&height=732&id=ua55545b1&name=image.png&originHeight=1463&originWidth=1725&originalType=binary&ratio=2&rotation=0&showTitle=false&size=345027&status=done&style=none&taskId=u5b87a594-a7a6-44f4-a7c6-fe242605ce6&title=&width=862.5)
只要有一个输入为低电平时，Y就可以输出高电平。这时T1导通，**由于T1的导通阻抗非常低，我们可以认为输出的电平为5V，这就是CMOS的满幅输出输出特征**。
## 可直接驱动TTL
我们使用的单片机是CMOS器件，而与电脑通讯的却是TTL转USB。
CMOS器件能直接通讯TTL吗？当然可以！
CMOS输出的高电平接近5V，低电平接近0V，而TTL的输入高电平大于2V，低电平小于0.8V。这样看CMOS是可以直接驱动TTL的。
![image.png](https://cdn.nlark.com/yuque/0/2023/png/34281420/1680964820099-5e6cea44-965c-4731-a318-fce28195bc0f.png#averageHue=%23fbf7ef&clientId=ud197b260-27a8-4&from=paste&height=676&id=u6761d289&name=image.png&originHeight=1352&originWidth=3200&originalType=binary&ratio=2&rotation=0&showTitle=false&size=376455&status=done&style=none&taskId=udc8c17fc-c4b8-4c9c-9a66-ebede868f1f&title=&width=1600)


