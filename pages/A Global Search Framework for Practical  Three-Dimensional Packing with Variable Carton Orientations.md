- # A Global Search Framework for Practical  Three-Dimensional Packing with Variable Carton Orientations
## Metadata

* Item Type: [[Article]]
* Authors: [[Yaohua He]], [[Yong Wu]], [[Robert de Souza]]
* Date: [[2012-10-01]]
* Date Added: [[2022-05-15]]
* URL: [https://www.sciencedirect.com/science/article/pii/S0305054811003625](https://www.sciencedirect.com/science/article/pii/S0305054811003625)
* DOI: [10.1016/j.cor.2011.12.007](https://doi.org/10.1016/j.cor.2011.12.007)
* Cite key: heGlobalSearchFramework2012a
* Topics: [[图形学]]
* Tags: #3D-packaging, #Evolutionary-gradient, #Genetic-algorithm, #Global-search, #Loading, #Packing, #Three-dimensional, #zotero, #literature-notes, #reference
* PDF Attachments
	- [He et al_2012_A global search framework for practical three-dimensional packing with variable.pdf](zotero://open-pdf/library/items/HEZSEKCQ)
	- ![He et al_2012_A global search framework for practical three-dimensional packing with variable.pdf](../assets/He_et_al_2012_A_global_search_framework_for_practical_three-dimensional_packing_with_variable_1652672936605_0.pdf)
- ## Abstract
  
  This article aims to tackle a practical three-dimensional packing problem, where a number of cartons of diverse sizes are to be packed into a bin with fixed len ![He et al_2012_A global search framework for practical three-dimensional packing with variable.pdf](../assets/He_et_al_2012_A_global_search_framework_for_practical_three-dimensional_packing_with_variable_1652672929157_0.pdf) gth and width but open height. Each carton is allowed to be packed in any one of the six orientations, and the carton edges are parallel to the bin edges. The allowance of variable carton orientations exponentially increases the solution space and makes the problem very challenging to solve. This study first elaborately devises the packing procedure, which converts an arbitrary sequence of cartons into a compact packing solution and subsequently develops an improved genetic algorithm (IGA) to evolve a set of solutions. Moreover, a novel global search framework (GSF), utilizing the concept of evolutionary gradient, is proposed to further improve the solution quality. Numerical experiments indicate that IGA provides faster and better results and GSF demonstrates its superior performance, especially in solving relative large-size and heterogeneous instances. Applying the proposed algorithms to some benchmarking cases of the three-dimensional strip packing problem also indicates that the algorithms are robust and effective compared to existing methods in the literature.
- ##  Zotero links
  * [Local library](zotero://select/items/1_RU82CAND)
  * [Cloud library](http://zotero.org/users/8989203/items/RU82CAND)
- 研究的问题：
	- 方差存在，充分利用搜索能力，直到解的平均偏差为 0
- 提出的方法：
	- 从 3D-BPP 到 3D-SPP
	- 3D-BPP: three dimensional bin packing problem
	- 3D-SPP: three-dimensional strip packing problem
	-
- 包装问题解决方法分为三类：
	- exact methods
		- MILP: mixed integer linear programming
			- solve the 3D-BPP with variable orientations
	- heuristics and approximate algorithms
	- meta-heuristics
- 大箱嵌套小的纸箱
- [[断头台切割]]
- CPLEX 11.2 和 GAMS