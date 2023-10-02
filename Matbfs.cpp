ll dx[]={1,0,0,-1,1,1,-1,-1};
ll dy[]={0,-1,1,0,1,-1,-1,1}; 

map<pair<int,int>,bool> vis;

void bfs(int ix,int iy,int n,int m){

   queue<pair<int,int>> q;

   q.push({ix,iy});

   int x,y,newx,newy;

   while(q.size()!=0){
       x = q.front().first;
       y = q.front().second;

       vis[{x,y}]=true;

       rep(i,0,4){
           newx=x+dx[i];
           newy=y+dy[i];
           if(newx==-1 || newy==-1 || newx==n || newy==m || vis[{newx,newy}]){ // other conditions for obstacles or other things can be added
               continue;
           }
           q.push({newx,newy});   
       }
   }
}
