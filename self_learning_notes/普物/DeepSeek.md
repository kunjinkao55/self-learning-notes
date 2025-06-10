

---

### 静电场

1. **库仑定律**
	- 点电荷间作用力：
		$$
		\vec{F}_{12} = \frac{1}{4\pi\varepsilon_0} \frac{q_1 q_2}{r_{12}^2} \hat{r}_{12}, \quad \frac{1}{4\pi\varepsilon_0} \approx 8.988 \times 10^9
		$$
2. **电场强度**
	- 点电荷电场：
		$$
		\vec{E} = \frac{1}{4\pi\varepsilon_0} \frac{Q}{r^2} \hat{r}
		$$
	- 连续电荷分布电场：
		$$
		\vec{E} = \frac{1}{4\pi\varepsilon_0} \int \frac{dq}{r^2} \hat{r} \quad (\text{体/面/线电荷})
		$$
	- 叠加原理：
		$$
		\vec{E} = \sum \vec{E}_i \quad \text{或} \quad \vec{E} = \int d\vec{E}
		$$
3. **高斯定理**
	- 积分形式：
		$$
		\oint_S \vec{E} \cdot d\vec{S} = \frac{Q_{\text{内}}}{\varepsilon_0}
		$$
	- 微分形式：
		$$
		\nabla \cdot \vec{E} = \frac{\rho}{\varepsilon_0}
		$$
4. **电势与场强关系**
	- 电势定义：
		$$
		V_a = -\int_a^{\infty} \vec{E} \cdot d\vec{l}
		$$
	- 场强与电势梯度：
		$$
		\vec{E} = -\nabla V
		$$
5. **典型电场**
	- 无限长直导线（线密度 $\lambda$ ）：
		$$
		E = \frac{\lambda}{2\pi\varepsilon_0 r}
		$$
	- 无限大平板（面密度 $\sigma$ ）：
		$$
		E = \frac{\sigma}{2\varepsilon_0}
		$$
	- 均匀带电球壳（半径 $R$ ，电量 $Q$ ）：
		$$
		E = 
		\begin{cases} 
		0 & (r < R) \\
		\dfrac{Q}{4\pi\varepsilon_0 r^2} & (r \geq R)
		\end{cases}
		$$

---

### 静电场中的导体

1. **静电平衡条件**
	- 导体内部：
		$$
		E_{\text{内}} = 0, \quad V_{\text{导体}} = \text{常数}
		$$
	- 表面附近场强：
		$$
		E = \frac{\sigma}{\varepsilon_0}
		$$
2. **电荷分布**
	- 实心导体：电荷仅分布于表面。
	- 空腔导体（腔内无电荷）：内表面无电荷。
	- 空腔导体（腔内有电荷 $q$ ）：内表面感应电荷 $-q$ 。

---

### 电介质

1. **极化强度与束缚电荷**
	- 极化强度定义：
		$$
		\vec{P} = \varepsilon_0 \chi_e \vec{E}
		$$
	- 束缚电荷密度：
		$$
		\sigma' = \vec{P} \cdot \hat{n}, \quad \rho' = -\nabla \cdot \vec{P}
		$$
2. **电位移矢量**
	- 定义：
		$$
		\vec{D} = \varepsilon_0 \vec{E} + \vec{P} = \varepsilon \vec{E} \quad (\varepsilon = \varepsilon_0 \varepsilon_r)
		$$
	- 高斯定理：
		$$
		\oint_S \vec{D} \cdot d\vec{S} = Q_{\text{自由}}
		$$

---

### 电容与电场能量

1. **电容定义**
	$$
	C = \frac{Q}{U}
	$$
	- 平行板电容器：
		$$
		C = \frac{\varepsilon S}{d}
		$$
	- 球形电容器：
		$$
		C = 4\pi\varepsilon_0 \frac{R_1 R_2}{R_2 - R_1}
		$$
2. **电场能量**
	- 能量密度：
		$$
		w_e = \frac{1}{2} \vec{D} \cdot \vec{E} = \frac{1}{2} \varepsilon E^2
		$$
	- 电容器储能：
		$$
		W = \frac{1}{2} CU^2 = \frac{Q^2}{2C}
		$$

---

### 稳恒磁场

1. **毕奥-萨伐尔定律**
	- 电流元产生磁场：
		$$
		d\vec{B} = \frac{\mu_0}{4\pi} \frac{I d\vec{l} \times \hat{r}}{r^2}
		$$
	- 运动电荷磁场：
		$$
		\vec{B} = \frac{\mu_0}{4\pi} \frac{q \vec{v} \times \hat{r}}{r^2}
		$$
2. **典型磁场**
	- 无限长直导线：
		$$
		B = \frac{\mu_0 I}{2\pi r}
		$$
	- 圆电流圆心处：
		$$
		B = \frac{\mu_0 I}{2R}
		$$
	- 长直螺线管内部：
		$$
		B = \mu_0 n I
		$$
3. **磁场定理**
	- 高斯定理：
		$$
		\oint_S \vec{B} \cdot d\vec{S} = 0
		$$
	- 安培环路定理：
		$$
		\oint_L \vec{B} \cdot d\vec{l} = \mu_0 I_{\text{内}}
		$$

---

### 电磁感应

1. **法拉第电磁感应定律**
	- 感应电动势：
		$$
		\mathcal{E} = -\frac{d\Phi_B}{dt}, \quad \Phi_B = \int \vec{B} \cdot d\vec{S}
		$$
	- 感生电场：
		$$
		\oint \vec{E} \cdot d\vec{l} = -\frac{d\Phi_B}{dt}, \quad \nabla \times \vec{E} = -\frac{\partial \vec{B}}{\partial t}
		$$
2. **动生电动势**
	- 洛伦兹力驱动：
		$$
		\mathcal{E} = \int (\vec{v} \times \vec{B}) \cdot d\vec{l}
		$$
3. **自感与互感**
	- 自感电动势：
		$$
		\mathcal{E}_L = -L \frac{dI}{dt}
		$$

---

### 麦克斯韦方程组

| **积分形式** | **微分形式** |
| --- | --- |
| $\oint_S \vec{E} \cdot d\vec{S} = \dfrac{Q}{\varepsilon_0}$ | $\nabla \cdot \vec{E} = \dfrac{\rho}{\varepsilon_0}$ |
| $\oint_S \vec{B} \cdot d\vec{S} = 0$ | $\nabla \cdot \vec{B} = 0$ |
| $\oint_L \vec{E} \cdot d\vec{l} = -\dfrac{d\Phi_B}{dt}$ | $\nabla \times \vec{E} = -\dfrac{\partial \vec{B}}{\partial t}$ |
| $\oint_L \vec{B} \cdot d\vec{l} = \mu_0 I + \mu_0 \varepsilon_0 \dfrac{d\Phi_E}{dt}$ | $\nabla \times \vec{B} = \mu_0 \vec{J} + \mu_0 \varepsilon_0 \dfrac{\partial \vec{E}}{\partial t}$ |

---

### 电磁波

1. **波动方程**
	$$
	\nabla^2 \vec{E} = \mu_0 \varepsilon_0 \frac{\partial^2 \vec{E}}{\partial t^2}, \quad \nabla^2 \vec{B} = \mu_0 \varepsilon_0 \frac{\partial^2 \vec{B}}{\partial t^2}
	$$
2. **光速公式**
	$$
	c = \frac{1}{\sqrt{\mu_0 \varepsilon_0}} \approx 3 \times 10^8  \text{m/s}
	$$

---

### 补充说明

1. **符号约定**
	- $\varepsilon_0$ ：真空介电常数， $\mu_0$ ：真空磁导率
	- $\varepsilon_r$ ：相对介电常数， $\chi_e$ ：电极化率
	- $\vec{P}$ ：极化强度， $\vec{D}$ ：电位移矢量
	- $L$ ：自感系数， $\Phi_B$ ：磁通量
2. **关键结论**
	- 静电场的无旋性： $\nabla \times \vec{E} = 0$
	- 磁场的无源性： $\nabla \cdot \vec{B} = 0$
	- 位移电流： $I_d = \varepsilon_0 \dfrac{d\Phi_E}{dt}$

