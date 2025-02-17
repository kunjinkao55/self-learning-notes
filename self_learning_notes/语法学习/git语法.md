以下是一份常用的 **Git 命令指南**，涵盖日常开发中最常用的操作：

---

### **1. 配置 Git**
```bash
# 设置用户名和邮箱（全局）
git config --global user.name "你的名字"
git config --global user.email "你的邮箱"

# 查看当前配置
git config --list
```

---

### **2. 创建/克隆仓库**
```bash
# 初始化新仓库
git init

# 克隆远程仓库
git clone https://github.com/用户名/仓库名.git
```

---

### **3. 提交更改**
```bash
# 查看当前文件状态
git status

# 添加文件到暂存区
git add 文件名          # 添加单个文件
git add .              # 添加所有修改和新文件
git add -u             # 添加所有已跟踪文件的修改

# 提交更改到本地仓库
git commit -m "提交说明"

# 合并 add 和 commit（仅对已跟踪文件有效）
git commit -am "提交说明"
```

---

### **4. 分支管理**
```bash
# 查看所有分支
git branch -a

# 创建新分支
git branch 分支名

# 切换分支
git checkout 分支名

# 创建并切换到新分支
git checkout -b 新分支名

# 合并分支到当前分支
git merge 分支名

# 删除分支
git branch -d 分支名      # 安全删除
git branch -D 分支名      # 强制删除（未合并时）
```

---

### **5. 远程仓库**
```bash
# 关联远程仓库
git remote add origin 远程仓库URL

# 查看远程仓库信息
git remote -v

# 推送本地分支到远程
git push origin 分支名

# 拉取远程分支更新（并合并）
git pull origin 分支名

# 拉取远程分支但不合并（仅更新）
git fetch origin
```

---

### **6. 撤销操作**
```bash
# 撤销工作区修改（未 add）
git checkout -- 文件名

# 撤销暂存区修改（已 add 未 commit）
git reset HEAD 文件名

# 撤销最后一次 commit（保留修改）
git reset --soft HEAD~1

# 撤销最后一次 commit（不保留修改）
git reset --hard HEAD~1

# 回退到指定 commit（谨慎使用）
git reset --hard commit_id
```

---

### **7. 查看历史**
```bash
# 查看提交历史
git log
git log --oneline      # 简洁模式
git log --graph        # 图形化分支

# 查看文件修改内容
git diff
git diff 文件名        # 查看具体文件差异
```

---

### **8. 忽略文件**
在项目根目录创建 `.gitignore` 文件，列出需要忽略的文件/文件夹：
```
# 示例
node_modules/
*.log
.DS_Store
```

---

### **9. 储藏更改（Stash）**
```bash
# 临时保存未提交的修改
git stash

# 恢复最近储藏的修改
git stash pop

# 查看所有储藏记录
git stash list
```

---

### **10. 标签管理**
```bash
# 创建标签（用于版本标记）
git tag v1.0.0

# 推送标签到远程
git push origin --tags
```

---

### **11. 子模块（Submodule）**
```bash
# 添加子模块
git submodule add 仓库URL

# 初始化子模块
git submodule init
git submodule update
```

---

### **注意事项**
1. **提交信息规范**：使用清晰简洁的说明（如 `feat: 添加登录功能`）。
2. **分支策略**：推荐使用 `main`/`master` 作为主分支，开发功能时创建新分支。
3. **定期拉取更新**：在推送前先执行 `git pull` 避免冲突。
4. **慎用 `--hard`**：`git reset --hard` 会永久删除未提交的修改。

---

这份指南覆盖了日常开发中 90% 的场景，建议收藏备用！