dfs(node, parent)
{
vis [node] = 1;
// visit the neighbours
for(auto it: adj [node])
{
if(vis[i] == 0)
{
if(dfs(it, node) == true)
return true;
}
// already visited but is not parent node
else if(it != parent)
return true;
}
// not a cycle
return false;
}