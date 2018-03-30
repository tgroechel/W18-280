# General
alias resource="source ~/.bash_profile"
alias 4-way="terminator -l 4-way"
alias 8-way="terminator -l 8-way"
alias start4="chromium-browser & subl & 4-way"
alias start8="chromium-browser & subl & 8-way"
alias find_me="grep -Ril"

# ssh
alias ssh-umich_off="ssh tgroeche@login.engin.umich.edu"

# Git
alias gst="git status"
alias gitdiff-meld="git difftool --dir-dif -y -g -t meld"
alias gmerge="git mergetool --tool=meld"
alias gam="git add ."
alias gcm="git commit -m"
alias gitboost-push="cd ~/boostnotes && gam && gcm 'generic' && git push"
alias gitboost-pull="cd ~/boostnotes && git pull"

