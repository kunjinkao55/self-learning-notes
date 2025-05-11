```latex
\documentclass{article}
\usepackage{amsmath, amssymb}
\usepackage{graphicx}
\usepackage{hyperref}
\usepackage{geometry}
\usepackage{tikz}

\begin{document}

% 章节标题
\section{文档结构与文本格式}

Hello, LaTeX!

\textbf{粗体}，\textit{斜体}，\underline{下划线}

换行使用：\\  
段落：空一行即可分段。

\subsection{列表环境}

% 无序列表
\begin{itemize}
  \item 项目一
  \item 项目二
\end{itemize}

% 有序列表
\begin{enumerate}
  \item 第一项
  \item 第二项
\end{enumerate}

\section{数学公式}

行内公式：$E = mc^2$

行间公式：
\[
  f(x) = \int_{-\infty}^{\infty} e^{-x^2} dx
\]

带编号公式：
\begin{equation}
  a^2 + b^2 = c^2
  \label{eq:pythagorean}
\end{equation}

常见数学符号：
\[
  \frac{a}{b}, \sqrt{x}, x^2, x_i, \sum_{i=1}^n i, \prod_{i=1}^n i, \lim_{x\to0}, \infty, \rightarrow, \Rightarrow, \leq, \geq, \neq, \approx, \cdot, \times, \div
\]

\section{对齐与矩阵}

对齐公式：
\begin{align}
  a &= b + c \\
  x &= y - z
\end{align}

矩阵：
\[
\begin{bmatrix}
  a & b \\
  c & d
\end{bmatrix}
\quad
\begin{pmatrix}
  1 & 2 \\
  3 & 4
\end{pmatrix}
\]

\section{图像与表格}

插图示例（需要example.jpg文件）：
\begin{center}
\includegraphics[width=0.5\textwidth]{example.jpg}
\end{center}

表格示例：
\begin{center}
\begin{tabular}{|c|c|}
\hline
A & B \\
\hline
1 & 2 \\
\hline
\end{tabular}
\end{center}

\section{引用与标签}

如公式~\eqref{eq:pythagorean}所示，直角三角形满足勾股定理。\\
章节~\ref{sec:label-example}是示例。

\section{TikZ 示例}

\begin{tikzpicture}
  \draw[->] (0,0) -- (2,0) node[right] {$x$};
  \draw[->] (0,0) -- (0,2) node[above] {$y$};
  \draw (0,0) -- (1,1) node[right] {直线};
\end{tikzpicture}

\section{标签示例}
\label{sec:label-example}

这是一个用于引用的章节。

\end{document}
```
$\frac{a}{b}, \sqrt{x}, x^2, x_i, \sum_{i=1}^n i, \prod_{i=1}^n i, \lim_{x\to0}, \infty, \rightarrow, \Rightarrow, \leq, \geq, \neq, \approx, \cdot, \times, \div$
\frac{a}{b},
\sqrt{x},
x^2
, x_i,
\sum_{i=1}^n i,
\prod_{i=1}^n i,
\lim_{x\to0}, 
\infty,
\rightarrow,
\Rightarrow, 
\leq, 
\geq, 
\neq,
\approx,
\cdot, 
\times, 
\div