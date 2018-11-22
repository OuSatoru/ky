# 等价无穷小
$$
\sin x \sim \tan x \sim \arcsin x \sim \arctan x \sim \ln (1+x) \sim e^x-1 \sim x
$$
$$
1-\cos x \sim \frac{x^2}{2}
$$
$$ a^x-1 \sim x\ln a $$
$$ (1+x)^a-1 \sim ax $$
$$ 
\arcsin x-x \sim x-\sin x \sim \frac{1}{6}x^3 
$$
$$ x+\sin x \sim 2x $$
$$ x^2 - \sin^2 x \sim \frac{1}{3}x^4$$
$$\tan{x} - x  \sim x - \arctan{x} \sim \frac{1}{3}x^3$$

# 泰勒公式
$$\sin{x} = x - \frac{1}{3!}x^3 + \frac{1}{5!}x^5 + o(x^5)$$
$$\cos{x} = 1 - \frac{x^2}{2!} + \frac{x^4}{4!} + o(x^4)$$
$$\tan{x} = x + \frac{x^3}{3} + o(x^3)$$
$$\arcsin{x} = x + \frac{1}{6}x^3 + o(x^3)$$
$$\arctan{x} = x - \frac{x^3}{3} + o(x^3)$$
$$\ln(1+x) = x - \frac{x^2}{2} + \frac{x^3}{3} - \frac{x^4}{4} +o(x^4)$$
$$e^x = 1 + x + \frac{x^2}{2!} + \frac{x^3}{3!} + ... +\frac{x^n}{n!}$$
$$\frac{1}{1-x} = 1 +x +x^2 + ... + x^n ,,(|x| \lt 1)$$
$$(1+x)^a = 1 + ax + \frac{a(a-1)}{2!}x^2 +o(x^2)$$ 
$$\sqrt{1+x} = 1+ \frac{x}{2} - \frac{x^2}{8} + o(x^2)$$
<!-- $$\lim_{x \to ?} \frac{f(x)}{g(x)} \xlongequal [\frac{\infty}{\infty}] {\frac{0}{0}} \lim_{x \to ?} \frac{f'(x)}{g'(x)}$$ -->
# 导数
$$(\tan{x})' = \sec^2{x}$$
$$(\cot{x})' = -\csc^2{x}$$
$$(\sec{x})' = \sec{x} \tan{x}$$ 
$$(\csc{x})' = -\csc{x} \cot{x}$$
$$(\arcsin{x})' = \frac{1}{\sqrt{1-x^2}}$$ 
$$(\arccos{x})' = - \frac{1}{\sqrt{1-x^2}}$$
$$(\arctan{x})' = \frac{1}{1+x^2}$$ 
$$(\mathrm{arccot}\,{x})' = -\frac{1}{1+x^2}$$
$$[\ln{(x + \sqrt{x^2+1})}]' = \frac{1}{\sqrt{x^2+1}}$$ 
$$[\ln{(x + \sqrt{x^2-1})}]' = \frac{1}{\sqrt{x^2-1}}$$
# 定理
$$ f(x),g(x)连续，g(x)不变号，\int_{a}^{b}f(x)g(x)\,\mathrm{d}x=f(\xi)\int_{a}^{b}g(x)\,\mathrm{d}x $$
# 微分方程
$$ y'+p(x)y=q(x) \rightarrow y=e^{-\int{p(x)\,\mathrm{d}x}}(\int{e^{\int{p(x)\,\mathrm{d}x}}q{(x)\,\mathrm{d}x}}+C) $$
<br>

$$ y''+py'+qy=0 \rightarrow \lambda^2+p\lambda+q $$
$$ 齐次通解： C_1 e^{\lambda_1}+C_2 e^{\lambda_2} $$ 
$$ (C_1 + C_2x)e^{\lambda_1} $$
$$ \alpha \pm \beta i \rightarrow e^{\alpha x}(C_1 \cos \beta x + C_2\sin \beta x) $$
<br>

$$ y''+py'+qy=e^{\alpha x}p_m(x) \rightarrow y^*=e^{\alpha x}q_m(x)x^k $$
$$ k为\alpha与\lambda_1 \lambda_2相同的个数 $$
$$ y''+py'+qy=e^{\alpha x}（p_m(x) \cos \beta x + p_n(x)\sin \beta x)\rightarrow y^*=e^{\alpha x}(q_l(x)\cos \beta x + q_l(x)\sin \beta x)x^k $$
$$ \alpha \beta 与齐次相同k=1, else, k=0 $$

# 矩阵
$$ \bm{AB}=\bm{E},\bm{AB}=\bm{BA} $$
$$ \bm{AA}^*=\bm{A}^*\bm{A}=|\bm{A}|\bm{E} $$
$$ k\bm{EA}=\bm{A}k\bm{E} $$
$$ \bm{A}^{-1}=\frac{1}{|\bm{A}|}\bm{A^*} $$
$$|\bm{A}|=|\bm{A}|^{n-1}$$
$$(k\bm{A})^*=k^{n-1}\bm{A}^*$$
$$(\bm{A}^T)^*=(\bm{A}^*)^T$$
$$-1,*,T$$
$$(\bm{A}^*)^*=|\bm{A}|^{n-2}\bm{A} $$
$$
    \bm{A}=\left[ 
    \begin{matrix}
    a & b\\
    c & d
    \end{matrix}
    \right], \bm{A}^{-1}=\frac{1}{ad-bc}\left[ \begin{matrix}
    d & -b\\
    -c & a
    \end{matrix}
    \right]
$$
$$ 0 \le r(\bm{A}_{m \times n}) \le \min\{m,n\}, r(\bm{A})=0 \Leftrightarrow \bm{A}=\bm{O} $$
$$ k \ne 0, r(k\bm{A}) = r(\bm{A}) $$
$$ \forall\bm{A}_{m \times n}, r(\bm{A})=r(\bm{A}^T)=r(\bm{A}\bm{A}^T)=r(\bm{\bm{A}^T\bm{A}}) $$
$$ \bm{A}_{m\times n} \Leftrightarrow r(\bm{A}^n)=r(\bm{A}^{n+1}) $$
$$ \max\{r(\bm{A}),r(\bm{B})\} \le r(\bm{A}|\bm{B}) \le r(\bm{A})+r(\bm{B}) $$
$$ r(\bm{A}+\bm{B}) \le r(\bm{A})+r(\bm{B}) $$
$$ r(\bm{A}\bm{B}) \le \min\{ r(\bm{A}),r(\bm{B}) \} $$
$$ 若\bm{A}\bm{B}=\bm{O}，则r(\bm{A})+r(\bm{B}) \le n, n为\bm{A}的列数 $$
$$ 给\bm{A}_{m\times n},r(\bm{A}^*)=
    \begin{cases}
        n, r(\bm{A})=n\\
        1, r(\bm{A})=n-1\\
        0,r(\bm{A})\lt n-1
    \end{cases}
$$
$$ \lambda_i 是n_i重根，n_i = n-r(\lambda_i E-A) $$