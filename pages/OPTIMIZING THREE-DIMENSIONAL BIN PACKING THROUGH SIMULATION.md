## Metadata

* Item Type: [[Webpage]]
* Authors: [[E. Dube]]
* Date: [[2006]]
* Date Added: [[2022-05-16]]
* URL: [https://www.semanticscholar.org/paper/OPTIMIZING-THREE-DIMENSIONAL-BIN-PACKING-THROUGH-Dube/bb9986af2f26f7726fcef1bc684eac8239c9b853](https://www.semanticscholar.org/paper/OPTIMIZING-THREE-DIMENSIONAL-BIN-PACKING-THROUGH-Dube/bb9986af2f26f7726fcef1bc684eac8239c9b853)
* Cite key: dubeOPTIMIZINGTHREEDIMENSIONALBIN2006a
* Topics: [[图形学]]
, #zotero, #literature-notes, #reference
* PDF Attachments
	- [Dube_2006_OPTIMIZING THREE-DIMENSIONAL BIN PACKING THROUGH SIMULATION.pdf](zotero://open-pdf/library/items/4KX57WVI)
## Abstract

The software tool that the paper develops uses both heuristics and some knapsack problem approach, and presents the solutions as a 3D graphical representation of the solution space as a disciplined approach to solving the 3D Bin Packing Problem. The problem addressed in this paper is that of orthogonally packing a given set of rectangular-shaped items into a minimum number of three-dimensional rectangular bins. We harness the computing power of the modern day computers to solve this NP-Hard problem that would be otherwise practically extremely difficult. The software tool that we develop using both heuristics and some knapsack problem approach, presents the solutions as a 3D graphical representation of the solution space. The visual and interactive ability of the simulation model provides a disciplined approach to solving the 3D Bin Packing Problem.
##  Zotero links
* [Local library](zotero://select/items/1_QA83A8D9)
* [Cloud library](http://zotero.org/users/8989203/items/QA83A8D9)
- ## 1、研究问题
	- 文章直接假设物品和容器均为长方体，选取若干的容器装载物品，使得每一个容器的体积利用率最大。可以解读为，物品总体积/使用容器总体积 这个值最小即可。
	- 物品一旦打包，没有回溯
- ## 2、假设条件
	- (1) 物品和容器均为正方体
	- (2) 物品和容器平行装载
	- (3) 物品可以在六个方向随意旋转
	- 需要指出的是，这里没有考虑的限制有很多，比如重心限制，承重限制等
- ## 3、约束条件
	- (1) 总重量：每个箱子的载重量有限
	- (2) 大小：放置的所有物品大小不能超过箱子本身
	- (3) 交叉：不同物品间不能交叉放置
- ## 4、解决方法
	- ### Best Fit
		- （1）以体积大小为标准，对items和bins做排序。初始放置点为（0，0，0）。
		- （2）第一个物品放置完毕后，之后每放置一个物品，首先生成一个可放置点，具体方法是：根据上一个物品的放置点，我们可以按照width，depth，height三个方向新生成三个可放置点，这里并不保存，只是选择其中的一个作为可放置点。然后穷尽6个方向放置物品，直到物品可以被放进去。
		- （3）如果在三个方向上生成的可放置点上都无法将箱子放进去，那么就将该物品放入 unfitted items 中，先将其他箱子处理完，再来处理该箱子。
	- ### 3D First Fit Decreasing
		- （1）该算法尽量让物品和最长边贴着箱子的最长边放置。比如一个箱子为10×9×8，即 width 是最长的。有一个物品规格为1×2×3，那么就使其旋转变成3×2×1（或3×1×2），使最长边贴着箱子的最长边放置。
		- （2）初始阶段，按照箱子width、height、depth的大小顺序，对装载的物品做一个递减排序。比如箱子箱子是10×9×8，即width>height>depth，那么箱子就要按照宽带、长度、深度递减的顺序排列。
		- （3）假设3×2×1无法放置到箱子，那么再次旋转使其变成2×3×1（或2×1×3），使其第二长边对应箱子放置，以此类推。
	- 作者没有给出该方法的伪代码，有效性和算法的优劣性暂无结论。而且这个也只适用于单个箱子装载物品的场景，当有多个种类和规格不同的箱子进行装载的时候，这个方法没有很方便。
- ## 5、实验分析部分
	- 实验分析部分并未给出对比，仅仅做了可视化实验。
- 缺陷
	- 解决方案与问题之间没有连续性，改变问题参数后解决方案变化大
-