# OptCuts: joint optimization of surface cuts and parameterization
## Metadata

* Item Type: [[Article]]
* Authors: [[Minchen Li]], [[Danny M. Kaufman]], [[Vladimir G. Kim]], [[Justin Solomon]], [[Alla Sheffer]]
* Date: [[2018-12-31]]
* Date Added: [[2022-05-19]]
* URL: [https://dl.acm.org/doi/10.1145/3272127.3275042](https://dl.acm.org/doi/10.1145/3272127.3275042)
* DOI: [10.1145/3272127.3275042](https://doi.org/10.1145/3272127.3275042)
* Cite key: liOptCutsJointOptimization2018
* Topics: [[图形学]]
, #zotero, #literature-notes, #reference
* PDF Attachments
	- [Li et al_2018_OptCuts.pdf](zotero://open-pdf/library/items/PKDKE4CC)
	- ![Li et al_2018_OptCuts.pdf](../assets/Li_et_al_2018_OptCuts_1653033707713_0.pdf)
## Abstract

Low-distortion mapping of three-dimensional surfaces to the plane is a critical problem in geometry processing. The intrinsic distortion introduced by these UV mappings is highly dependent on the choice of surface cuts that form seamlines which break mapping continuity. Parameterization applications typically require UV maps with an application-specific upper bound on distortion to avoid mapping artifacts; at the same time they seek to reduce cut lengths to minimize discontinuity artifacts. We propose
            OptCuts
            , an algorithm that jointly optimizes the parameterization and cutting of a three-dimensional mesh. OptCuts starts from an arbitrary initial embedding and a user-requested distortion bound. It requires no parameter setting and automatically seeks to minimize seam lengths subject to satisfying the distortion bound of the mapping computed using these seams. OptCuts alternates between topology and geometry update steps that consistently decrease distortion and seam length, producing a UV map with compact boundaries that strictly satisfies the distortion bound. OptCuts automatically produces high-quality, globally bijective UV maps without user intervention. While OptCuts can thus be a highly effective tool to create new mappings from scratch, we also show how it can be employed to improve pre-existing embeddings. Additionally, when semantic or other priors on seam placement are desired, OptCuts can be extended to respect these user preferences as constraints during optimization of the parameterization. We demonstrate the scalable performance of OptCuts on a wide range of challenging benchmark parameterization examples, as well as in comparisons with state-of-the-art UV methods and commercial tools.
##  Zotero links
* [Local library](zotero://select/items/1_WPNARGEK)
* [Cloud library](http://zotero.org/users/8989203/items/WPNARGEK)
-