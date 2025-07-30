# vim编辑器
 # vim
![[CS106L/picture/image-6.png]]

虚拟机与主系统共享文件夹挂载 mount -t vboxsf Linux_v /mnt

# shell脚本
## 变量
定义变量 定义函数

执行文件中的脚本命令： source + 文件路径 
 例如    source ~/ts0/test
![[Linux系统基础/picture/image 1.png]]

grep XXX 搜索命令中的特定字符串

# 通配符

## ✅ 一、通配符（Wildcard）

作用：匹配**文件名**、**路径名**，不匹配变量名或命令名。

| 通配符     | 含义               | 示例                                  |
| ------- | ---------------- | ----------------------------------- |
| `*`     | 匹配任意长度的任意字符（包括空） | `rm foo*`：删除以 foo 开头的所有文件           |
| `?`     | 匹配任意单个字符         | `rm foo?`：匹配 `fooa`、`foob` 等        |
| `[...]` | 匹配指定集合中的任一字符     | `ls test[123]`：匹配 test1、test2、test3 |
| `[a-z]` | 匹配指定范围中的字符       | `ls test[a-z]`：匹配 testa、testb...    |

📌 注意：`*` 和 `?` 是“**贪婪**”匹配，不支持正则逻辑（如 `+`, `|`）。

---

## ✅ 二、方括号 `[...]`（字符集匹配）

用于精确控制单个字符的范围。

| 表达式 | 匹配内容 |
| --- | --- |
| `[abc]` | 匹配 `a`、`b` 或 `c` |
| `[1-3]` | 匹配 `1`、`2`、`3` |
| `[a-z]` | 匹配所有小写字母 |
| `[!a-z]` 或 `[^a-z]` | 匹配**非**小写字母（排除） |

---

## ✅ 三、花括号 `{}`（**brace expansion**）

花括号不是“通配符”，但常和通配符混用。它会**事先生成一组字符串**，即“展开”。

### 🌰 示例一：文件名扩展

```
convert image.{png,jpg}
```

展开为：

```
convert image.png image.jpg
```

### 🌰 示例二：批量操作

```
cp /project/{foo,bar,baz}.sh /newproject
```

展开为：

```
cp /project/foo.sh /project/bar.sh /project/baz.sh /newproject
```

### 🌰 示例三：范围展开

```
touch {foo,bar}/{a..h}
```

展开为：

```
foo/a foo/b ... foo/h
bar/a bar/b ... bar/h
```

### 🌰 示例四：文件类型分类移动

```
mv *{.py,.sh} folder
```

展开为：

```
mv *.py *.sh folder
```

---

## 🔍 四、通配符 VS 正则表达式（易混点）

| 类型 | 是否正则 | 用于哪里 |
| --- | --- | --- |
| `* ? [ ]` | ❌ 否 | 文件名匹配（glob） |
| `.* ^ $ \d+` | ✅ 是 | 用于 grep / sed 等 |

---

## 🧠 总结用法对比表

| 表达式 | 类型 | 含义 |
| --- | --- | --- |
| `*` | 通配符 | 任意多个字符 |
| `?` | 通配符 | 单个任意字符 |
| `[abc]` | 通配符 | 匹配 a、b、c 中一个 |
| `[1-5]` | 通配符 | 匹配数字 1~5 |
| `{a,b,c}` | 花括号展开 | 展开为 a b c |
| `{1..3}` | 花括号展开 | 展开为 1 2 3 |
| `{x,y}/{a..b}` | 花括号嵌套 | 展开为 x/a x/b y/a y/b |

---

## 🚫 注意陷阱

1. `*` 不会递归子目录（除非配合 `**`，Bash 4.0+ 开启 `shopt -s globstar`）
2. 括号展开不是按文件存在与否执行，而是**提前字符串展开**。
3. 所有通配符都作用在文件系统（即匹配文件名），不是字符串逻辑。



# 查找文件

### 🔹 最常用的查找文件命令：

| 示例命令 | 含义说明 |
| --- | --- |
| `find . -name "file.txt"` | 在当前目录下查找名为 `file.txt` 的文件 |
| `find /etc -name "*.conf"` | 查找 `/etc` 目录下所有 `.conf` 文件 |
| `find . -type d -name "test*"` | 查找所有名为 test 开头的目录 |
| `find . -type f -size +1M` | 查找大于 1MB 的普通文件 |
| `find . -mtime -1` | 查找最近 1 天内修改过的文件 |
| `find / -user root` | 查找属于 `root` 用户的所有文件 |
![[Linux系统基础/picture/image 2.png]]
find . -type f -exec rm -- {} +  两个减号是为防止rm将后面的内容识别为参数
反斜杠是在命令执行后后将每一次删除独立进行，避免失败

查找文件内容 grep  [重点]
![[Linux系统基础/picture/image-1 1.png|413x267]]
![[Linux系统基础/picture/image-3 1.png|417x298]]

排序命令 sort
切割命令 cut 
计数命令 wc
相邻重复 uniq
