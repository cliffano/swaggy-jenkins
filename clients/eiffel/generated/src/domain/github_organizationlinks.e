note
 description:"[
		Swaggy Jenkins
 		Jenkins API clients generated from Swagger / Open API specification
  		OpenAPI spec version: 1.0.0
 	    Contact: blah@cliffano.com

  	NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

 		 Do not edit the class manually.
 	]"
	date: "$Date$"
	revision: "$Revision$"
	EIS:"Eiffel openapi generator", "src=https://openapi-generator.tech", "protocol=uri"
class GITHUB_ORGANIZATIONLINKS 

inherit

  ANY
      redefine
          out 
      end


feature --Access

    repositories: detachable LINK 
      
    self: detachable LINK 
      
    var_class: detachable STRING_32 
      

feature -- Change Element  
 
    set_repositories (a_name: like repositories)
        -- Set 'repositories' with 'a_name'.
      do
        repositories := a_name
      ensure
        repositories_set: repositories = a_name		
      end

    set_self (a_name: like self)
        -- Set 'self' with 'a_name'.
      do
        self := a_name
      ensure
        self_set: self = a_name		
      end

    set_var_class (a_name: like var_class)
        -- Set 'var_class' with 'a_name'.
      do
        var_class := a_name
      ensure
        var_class_set: var_class = a_name		
      end


 feature -- Status Report

    out: STRING
          -- <Precursor>
      do
        create Result.make_empty
        Result.append("%Nclass GITHUB_ORGANIZATIONLINKS%N")
        if attached repositories as l_repositories then
          Result.append ("%Nrepositories:")
          Result.append (l_repositories.out)
          Result.append ("%N")    
        end  
        if attached self as l_self then
          Result.append ("%Nself:")
          Result.append (l_self.out)
          Result.append ("%N")    
        end  
        if attached var_class as l_var_class then
          Result.append ("%Nvar_class:")
          Result.append (l_var_class.out)
          Result.append ("%N")    
        end  
      end
end


