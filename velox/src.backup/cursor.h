/*
                   COMPASS
                      .               
                    .` `.               
                  .`     `.      
                .`         `.              
              .`      N      `.              
            .`        |        `.            
          .`    NW\   |   /NE    `.          
        .`         \  |  /         `.        
      .`            \ | /            `.      
    .`               \|/               `.    
  .`     W------------O------------E     `.  
   `.                /|\                .`   
     `.             / | \             .`     
       `.          /  |  \          .`       
         `.       /   |   \       .`         
           `.   SW    |    SE   .`           
             `.       S       .`             
               `.           .`     
                 `.       .`             
                   `.   .`            
                     `.`               

 * */
enum class Cursor {
    CURSOR_DEFAULT,
    CURSOR_ARROW,
    CURSOR_CROSS,
    CURSOR_WAIT,
    CURSOR_HAND,
    CURSOR_HELP,
    CURSOR_MOVE,

    // resize indicators
    CURSOR_NS,      // up/down
    CURSOR_WE,      // left/right
    CURSOR_NSWE,    // diagonal
    CURSOR_NESW,    // diagonal
    CURSOR_N,
    CURSOR_NE,
    CURSOR_E,
    CURSOR_SE,
    CURSOR_S,
    CURSOR_SW,
    CURSOR_W,
    CURSOR_NW,
    CURSOR_NONE
};
