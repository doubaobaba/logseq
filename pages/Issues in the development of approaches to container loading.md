# Issues in the development of approaches to container loading
## Metadata

* Item Type: [[Article]]
* Authors: [[E. E. Bischoff]], [[M. S. W. Ratcliff]]
* Date: [[1995-08-01]]
* Date Added: [[2022-05-16]]
* URL: [https://www.sciencedirect.com/science/article/pii/030504839500015G](https://www.sciencedirect.com/science/article/pii/030504839500015G)
* DOI: [10.1016/0305-0483(95)00015-G](https://doi.org/10.1016/0305-0483(95)00015-G)
* Cite key: bischoffIssuesDevelopmentApproaches1995
* Topics: [[图形学]]
* Tags: #benchmarks, #containers, #multicriteria, #space-utilization, #zotero, #literature-notes, #reference
* PDF Attachments
	- [Bischoff_Ratcliff_1995_Issues in the development of approaches to container loading.pdf](zotero://open-pdf/library/items/FXL6N3T7)
## Abstract

The paper argues that existing approaches to container loading problems are each applicable only to a narrow part of the spectrum of situations encountered in practice and that there are many scenarios for which there are no adequate methodologies. A number of examples are given. Two approaches aimed at addressing some of the present limitations are discussed. One is designed to produce stable, evenly distributed packing patterns; the other caters for multi-drop loads. A comprehensive performance analysis using both published and randomly generated test problems is presented. The procedure used to create the latter is described in full to enable replication. It is shown that the two methods, when combined, provide a powerful and versatile tool.
##  Zotero links
* [Local library](zotero://select/items/1_3ZZS88AW)
* [Cloud library](http://zotero.org/users/8989203/items/3ZZS88AW)
- ## 数据集
	- 给出了数据集生成算法，以及统一的问题定义，方便后来的学者继续做研究。
	- [数据集链接](http://people.brunel.ac.uk/~mastjjb/jeb/info.html)
- ## 研究背景
	- 作者对箱子进行了分类。按照箱子的种类和数量的多少，将装箱问题分为强异构型问题和弱异构型问题。当时的算法，很大程度上取决于问题是强异构类型还是弱异构类型，这个很影响算法的效果。因此，作者想找到一种结合的方法，却解决这个问题。
- ## 问题定义
	- 简单来说，就是给定单个容器和一系列尺寸不一一定数量的箱子，要找到一个恰当的装载方式，使得容器的容积利用率最大。注意，这里并不是要所有物品都被装进去，而是要用算法选定一定的物品进行装载，使得容器的容积利用率最大
- ## 约束条件
	- （1）箱子之间不能重叠。
	- （2）方向约束。width、height和depth是否能作为垂直方向的长度。
	- （3）承载约束。要考虑到箱子单位面积能够承受的重量。
	- （4）物品放置顺序的约束。比如重的物品要放在地板上，或者不能放太高，方便搬运和卸载。
	- （5）承载的稳定性。确保货物在运输过程中不能剧烈移动。
	- （6）物品分组限制。把相同的物品分为一组，放在一起，方便搬运和卸货。
	- （7）多次卸载限制。货物可能有不同的卸货地点，先卸货的后装载，后卸货的先装载。
	- （8）货物之间的分离。有一些货物不能放在一起，比如说化学品和食物
	- （9）完整的物品搬运。（还不太明白）
	- （10）货物运输的优先级。
	- （11）装载方法不能过于复杂，这样会导致更大的工作量。
	- （12）集装箱重量限制
	- （13）重心限制。整个容器的重心要尽量接近它的几何重心。