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
# 微分方程
$$ y'+p(x)y=q(x) \rightarrow y=e^{-\int{p(x)\,\mathrm{d}x}}(\int{e^{\int{p(x)\,\mathrm{d}x}}q{(x)\,\mathrm{d}x}}+C) $$
$$ y''+py'+qy=0 \rightarrow \lambda^2+p\lambda+q $$
$$ 1. C_1 e^{$$