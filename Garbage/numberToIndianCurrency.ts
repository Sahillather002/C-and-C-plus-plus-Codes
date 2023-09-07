export const numberToIndianCurrency=(
  data: number | string
)=>{
  try{
    if(typeof data=='string'){
      if(data.indexOf('.')!=-1){
        return parseFloat(data).toLocaleString("en-IN",{
            maximumFractionDigits:2,
            style:'currency',
            currency:'INR'
        })
      }
      else{
        let result=parseInt(data).toLocaleString("en-IN",{
            style:'currency',
            currency:'INR'
        })
        return result.slice(0,result.length-3)
      }
    }
    else{
      if(Number.isInteger(data)){
        let result=data.toLocaleString("en-IN",{
            style:'currency',
            currency:'INR'
        })
        return result.slice(0,result.length-3)
      }
      else{
        return data.toLocaleString("en-IN",{
            maximumFractionDigits:2,
            style:'currency',
            currency:'INR'
        })
      }
    }
  }catch(e){
    return `${data}`;
  }
};
