
GITHUB
	
	Basics

		Switch to workspace first!

		To clone repo: $ git clone git@github.com:Kornil/simple-react-app.git 
		DO NOT work in master

		Switch to DEVELOPMENT: $ git checkout development

		Then check out local branch: $ git checkout -b myNewBranch

		git branch (to see which branch you're on)

	Naming Branches

		bug: "bug/fixed-all-caps"
		feature: "feature/giant-duck-modal"
		refactor: "refactor/add-prop-types"
		style: "style/everything-is-black"

	Forgot to make a new branch?
		For non-committed or staged changes:
			git stash - Saves all changes and removes from branch
			git stash pop - use to place stash into new branch

		For committed changes:
			$ git push origin development:fix/your-smart-fix

			$ git checkout master
			$ git branch -D development
			$ git fetch
			$ git checkout development // optional, just to see that it's clean
			$ git checkout fix/your-smart-fix

	Use VSCode to commit single files.

	COMMITS
		$ git commit -m "Fix case sensitivity for email input"

		commit title and body
			$ git commit -m "My commit title" -m "My commit body message"

	MERGING
		update branch from the base branch
			// we start from branch fix/my-branch
			$ git checkout development
			$ git pull
			$ git checkout fix/my-branch
			$ git merge development

	If merging goes without issues
		Just push your working branch and make a pull request against development, wait for a review 

	git log - gets hash of commits so you can modify them

	revert = safest way to remove changes: $ git revert commitHash

	reset = use to rewrite commit messages. deletes commits, but not code. unstages code

