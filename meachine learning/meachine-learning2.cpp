1.机器如何学习
	1）数据预处理 	数据清洗、数据集成、数据采样

	2）特征工程 	特征编码、特征选择、特征降维、规范化

	3）数据建模 	回归问题、分类问题、聚类问题、其他问题

	4）结果评估 	拟合度量、查准率、查全率、F1值、PR曲线、ROC曲线


2.机器学习中将数据划分为3份：
	1）训练数据集：用来构建机器学习模型

	2）验证数据集：辅助构建模型，用于在构建过程中评估模型，提供无偏估计，进而调整模型参数

	3）测试数据集：用来评估训练好的最终模型的性能

	常用的拆分方法：

	留出法：直接将数据集划分为互斥的集合，如通常选择70%数据作为训练集，30%作为测试集。需要
	注意的是保持划分后集合数据分布的一致性，避免划分过程中引入额外的偏差而对最终结果产生影响

	k-折交验证法：将数据集划分为k个大小相似的互斥子集，并且尽量保持每个子集数据分布的一致性。
	这样，就可以获取k组训练-测试集，从而进行k次训练和测试，k通常取值为10。


3.特征编码
	数据集中经常会出现字符串信息，如男女、高中低等，这类信息不能直接用于算法计算，需要将这些
	数据转化为数值形式进行编码，便于后期进行建模。

	one-hot编码：采用N位状态寄存器来对N个状态进行编码，每个状态都由他独立的寄存器位，并在任意
	时候只有一位有效。

	语义编码：one-hot编码无法体现数据间的语义关系，对于一些有关联的文本信息来说，无法真正体现
	出数据关联。基于google的word2vec方法。


4.特征选择
	过滤法: 按照发散性或相关性对各特征进行评分，设定阈值完成特征选择。

	包裹法：选定特定算法，然后通过不断的启发式方法来搜索特征。

	嵌入法：利用正则化的思想，将特征属性的权重调整到0，则这个特性相当于被舍弃了。


5.特征降维
	特征选择完成后，可能由于特征矩阵过大，导致计算量大，训练时间长，，因此降低特征维度。

	主成分分析(PCA)；将原始特征空间映射到彼此正交的特征向量空间，在非满秩情况下使用SVD分解来构建特征向量。

	线性判别分析(LDA)：给出一个标注了类别的数据集，投射到了一条直线后，能够使得点尽量按类别区分开。


6.规范化
	1）标准化：通过减去均值然后除以方差(标准差)，将数据按比例缩放，使之落入一个小的特定区间。适用于数据分布服从正态分布。

	2）区间缩放：将属性缩放到一个指定的最大和最小(1~0)之间。 x = (x-min) / (max-min)

	3）归一化：将某一属性特征的模长转化成1。


7.机器学习方法分类

	1）分类问题：决策树、贝叶斯、SVM、逻辑回归、集成学习

	2）回归问题：线性回归、岭回归、Lasso回归

	3）聚类问题：K-means、高斯混合聚类、密度聚类、层次聚类、谱聚类

	4）其他问题：隐马尔可夫模型、LDA主题模型、条件随机场、神经网络、深度学习
	

