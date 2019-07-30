public class WebBrowser {

private PriorityQueue<WebPage> history;
private Map<String,WebPage> webPageMap;

class WebPage {
    private String url;
    private int visitCount;

    public WebPage(String url){
        this.url = url;
        this.visitCount = 0;
    }

    public void visited() {
        this.visitCount++;
    }
}

public WebBrowser() {
    this.history = new PriorityQueue<>(new Comparator<WebPage>() {
        @Override
        public int compare(WebPage o1, WebPage o2) {
            return o2.visitCount-o1.visitCount;
        }
    });
    this.webPageMap = new HashMap<>();
}


public void navigate(String url) {

    if(!this.webPageMap.containsKey(url)){
        this.webPageMap.put(url,new WebPage(url));
        WebPage page = this.webPageMap.get(url);
        page.visited();
        this.history.add(page);
    }else {
        WebPage page = this.webPageMap.get(url);
        this.history.remove(page);
        page.visited();
        this.history.add(page);
    }





}

public List<WebPage> mostVisisted() {

    List<WebPage> list = new ArrayList<>();
    Iterator<WebPage> itr = this.history.iterator();

    int count  = 5;
    while(itr.hasNext() && count>0) {
        list.add(itr.next());
        count--;
    }
    return list;
}


public static void main(String[] args) {

    WebBrowser webBrowser = new WebBrowser();
    webBrowser.navigate("https://www.google.com");
    webBrowser.navigate("https://www.twitter.com");
    webBrowser.navigate("https://www.yahoo.com");
    webBrowser.navigate("https://www.bloomberg.com");
    webBrowser.navigate("https://www.gmail.com");
    webBrowser.navigate("https://www.google.com");
    webBrowser.navigate("https://www.yahoo.com");
    webBrowser.navigate("https://www.yahoo.com");


    List<WebPage> list = webBrowser.mostVisisted();
    for(WebPage page : list ) {
        System.out.println(page.url);
    }
    System.out.println("");
}

