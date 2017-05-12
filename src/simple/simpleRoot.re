type smartcontract = {name: string, blockchain: string, status: string };


let items = [
  "assets",
  "accounts",
  "agents",
  "smartcontracts",
  "oracles",
  "markets",
  "peers",
  "orderers",
  "chains",
  "tokens",
  "files"
];

let isEthereum = fun
| "assets"
| "accounts"
| "smartcontracts"
| "oracles" => true
| _ => false;

let list =
<ul>
(items |> List.map item |> Array.of_list |> ReactRe.arrayToElement)
</ul>;

let smartcontract: smartcontract = {
  name: "Venture",
  blockchain: "Ethereum",
  status: "live"
};

let formatBlockchain smartcontract =>
smartcontract.name ^ " " ^ smartcontract.blockchain;

let hello =
  (ReactRe.stringToElement ("Hello, " formatBlockchain smartcontract));

let header =
  <h1 title=(formatBlockchain smartcontract)>
  This is the
  </h1>;


ReactDOMRe.renderToElementWithId header "index";
